#include QMK_KEYBOARD_H
#include <math.h>
#include "users/hloirea/def.h"


// Modify these alues to adjust the scrolling speed
#define SCROLL_DIVISOR_H 8.0
#define SCROLL_DIVISOR_V 8.0

// Variables to store accumulated scroll values
float scroll_accumulated_h = 0;
float scroll_accumulated_v = 0;

// Modify these to adjust non-linear mouse scaling
#define MAX_SCALE 32
#define MIN_SCALE 1
#define GROWTH_FACTOR 64
#define MOMENTUM 0.01

// Variable to store an exponential moving average scaling factor to denoise the non-linear scaling
float accumulated_factor = MIN_SCALE;

// Arrow keys slight slowing
#define ARROW_STEP 2
int accumulated_arrow_x = 0;
int accumulated_arrow_y = 0;

float average_arrow_x = 0;
float average_arrow_y = 0;

#define ARROW_MOMENTUM 0.99

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {

    if (!(layer_state_is(L_FUN) ||
          layer_state_is(L_MOUSE))) {
        // update the accumulated arrow momentum
        average_arrow_x = average_arrow_x*ARROW_MOMENTUM + (float) mouse_report.x*(1-ARROW_MOMENTUM);
        average_arrow_y = average_arrow_y*ARROW_MOMENTUM + (float) mouse_report.y*(1-ARROW_MOMENTUM);

        // kill accumulated clicks orthogonal to average direction
        if (fabs(average_arrow_x) > fabs(average_arrow_y)){
            accumulated_arrow_x += mouse_report.x;
            accumulated_arrow_y = 0;
        }
        if (fabs(average_arrow_y) > fabs(average_arrow_x)){
            accumulated_arrow_x = 0;
            accumulated_arrow_y += mouse_report.y;
        }

        // process queued clicks
        if (accumulated_arrow_x <= -ARROW_STEP){
            tap_code(KC_LEFT);
            accumulated_arrow_x += ARROW_STEP;
        }
        if (accumulated_arrow_x >= ARROW_STEP) {
            tap_code(KC_RIGHT);
            accumulated_arrow_x -= ARROW_STEP;
        }
        if (accumulated_arrow_y <= -ARROW_STEP){
            tap_code(KC_UP);
            accumulated_arrow_y += ARROW_STEP;
        }
        if (accumulated_arrow_y >= ARROW_STEP) {
            tap_code(KC_DOWN);
            accumulated_arrow_y -= ARROW_STEP;
        }

        // return a null report
        mouse_report.x = 0;
        mouse_report.y = 0;
        return mouse_report;
    }

    // compute the size of the last mouse movement
    float mouse_length = sqrt(mouse_report.x*mouse_report.x + mouse_report.y*mouse_report.y);

    // compute an instantaneous scaling factor and update exponential moving average
    float factor =  GROWTH_FACTOR*mouse_length+ MIN_SCALE;
    accumulated_factor = accumulated_factor*(1-MOMENTUM) + factor*MOMENTUM;

    if (accumulated_factor > MAX_SCALE) {
        // clamp the scaling factor to avoid overflowing mouse_report
        mouse_report.x *= MAX_SCALE;
        mouse_report.y *= MAX_SCALE;
    } else {
        // scale up the mouse movement by the average factor
        mouse_report.x = (int16_t)(mouse_report.x * accumulated_factor);
        mouse_report.y = (int16_t)(mouse_report.y * accumulated_factor);
    }

    // switch to scrolling on every layer but L_MOUSE
    if (layer_state_is(L_FUN)) {
        // Calculate and accumulate scroll values based on mouse movement and divisors
        scroll_accumulated_h += (float)mouse_report.x / SCROLL_DIVISOR_H;
        scroll_accumulated_v += (float)mouse_report.y / SCROLL_DIVISOR_V;

        // Assign integer parts of accumulated scroll values to the mouse report
        mouse_report.h = (int16_t)scroll_accumulated_h;
        mouse_report.v = (int16_t)scroll_accumulated_v;

        // Update accumulated scroll values by subtracting the integer parts
        scroll_accumulated_h -= (int16_t)scroll_accumulated_h;
        scroll_accumulated_v -= (int16_t)scroll_accumulated_v;

        // Clear the X and Y values of the mouse report
        mouse_report.x = 0;
        mouse_report.y = 0;
    }

    return mouse_report;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case L_BASE:
        pimoroni_trackball_set_rgbw(0,0,0,0);
        break;
    case L_FUN:
        pimoroni_trackball_set_rgbw(192,192,0,0);
        break;
    case L_NAV:
        pimoroni_trackball_set_rgbw(192,64,192,0);
        break;
    case L_SYML:
    case L_SYMR:
        pimoroni_trackball_set_rgbw(64,192,192,0);
        break;
    case L_MOUSE:
        pimoroni_trackball_set_rgbw(0,0,0,255);
        break;
    }
  return state;
}

/*
void keyboard_post_init_user(void) {
	pimoroni_trackball_set_rgbw(0,0,0,255);
}

void suspend_power_down_user(void) {
	pimoroni_trackball_set_rgbw(0,0,0,0);
}

void suspend_wakeup_init_user(void) {
    pimoroni_trackball_set_rgbw(0,0,0,255);
}
*/
