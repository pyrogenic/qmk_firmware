#include QMK_KEYBOARD_H
#include "keymap_german.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_all( /* 0: qwerty */
        KC_ESC,  DE_LABK, DE_1,    DE_2,    DE_3,    DE_4,    DE_5,    DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS, DE_ACUT, KC_BSPACE,
        KC_TAB,    DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,    DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA, DE_PLUS, _______,
        KC_CAPS,    DE_A,    DE_S,    DE_D,    DE_F,    DE_G,    DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA, DE_HASH,  KC_ENTER,
        KC_LSFT,  DE_CIRC, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS,KC_RSFT,_______,
        KC_LCTL,  KC_LGUI, KC_LALT,                   KC_SPC,                                      KC_ALGR, MO(1), KC_APP,  KC_RCTL
    ),

    [1] = LAYOUT_all( /* 1: fn */
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PGUP, KC_DELETE,
        _______,    _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______,  KC_UP, KC_PGDN, _______,
        _______,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,  RESET, _______, _______, _______,  KC_LEFT, KC_DOWN, KC_RIGHT, _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_HOME, KC_END, _______,
        _______,  _______,  _______,                   _______,                                     _______,  _______,  _______,  _______
    ),

};

void matrix_scan_user(void) {

//Layer LED indicators
    uint32_t layer = layer_state;

    if (layer & (1<<1)) {
        gh60_wasd_leds_on();
        gh60_fn_led_on();
    } else {
        gh60_wasd_leds_off();
        gh60_fn_led_off();
    }

    if (layer & (1<<2)) {
        gh60_poker_leds_on();
        gh60_esc_led_on();
    } else {
        gh60_poker_leds_off();
        gh60_esc_led_off();
    }

};
