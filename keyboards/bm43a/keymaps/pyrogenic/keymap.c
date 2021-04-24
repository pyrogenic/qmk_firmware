#include QMK_KEYBOARD_H
#include "quantum.h"

// Tap Dance declarations
enum tapdances {
    TD_ENTER_OR_QUOTE,
    // TD_L_OR_BACKSLASH,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for enter, twice for quote
    [TD_ENTER_OR_QUOTE] = ACTION_TAP_DANCE_DOUBLE(KC_ENT, KC_QUOTE),
    // [TD_L_OR_BACKSLASH] = ACTION_TAP_DANCE_DOUBLE(KC_L, KC_BSLS),
};

// // Add tap dance item in place of a key code
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     // ...
//     TD(TD_ESC_CAPS)
//     // ...
// };
#define RGB_PLN RGB_MODE_PLAIN
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P , KC_BSPC,
        KC_TAB,    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_ENTER_OR_QUOTE),
        KC_LSFT,      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_UP, KC_DOT,
        LCTL_T(KC_SCLN), LALT_T(KC_SLSH), LGUI_T(KC_MINS), LT(1, KC_SPC), LT(2, KC_SPC), MO(3), KC_LEFT, KC_DOWN, KC_RGHT),

	[1] = LAYOUT(
        KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL,
        LGUI(KC_TAB),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN, KC_MUTE, KC_RPRN,
        KC_TRNS, KC_BSLASH, KC_EQL,            KC_TRNS,     KC_TRNS,        LGUI(KC_LBRC), KC_MRWD, KC_MPLY, KC_MFFD),

	[2] = LAYOUT(
        KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,  KC_DEL,
        KC_TRNS,   KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_BSLS,
        KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_TRNS, KC_RCBR,
        KC_TRNS, KC_BSLASH, KC_EQL,            KC_TRNS,     KC_TRNS,       LGUI(KC_RBRC), KC_TRNS, KC_TRNS, KC_TRNS),

	[3] = LAYOUT(
        KC_GRV, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), KC_MINS, KC_EQL , KC_DEL,
        KC_CAPSLOCK, BL_TOGG, BL_BRTG, BL_INC, BL_DEC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS,   KC_QUOT,
        KC_TRNS,          RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, RGB_HUI, RGB_SAI, RGB_PLN, KC_LBRC, KC_PGUP, KC_RBRC,
        RESET,  KC_BSLASH,  KC_EQL,            KC_TRNS,            KC_TRNS,        KC_TRNS, KC_HOME, KC_PGDN, KC_END),
};

