#include "studio54.h"

/* Copyright 2021 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define ___________ _______
#define ________________ _______
#define _________________________ _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT(
		KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,
		KC_GRV,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_QUOT,
		KC_TAB,       KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
		KC_LSFT,          KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_UP,  KC_DOT,
		CTL_T(KC_SCLN),
                 GUI_T(KC_SLSH),
                          ALT_T(KC_MINS),
                                     LT(1, KC_SPC),         LT(2, KC_SPC),        KC_LEFT,KC_DOWN,KC_RGHT),

	LAYOUT(
		_______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_DEL,
		_______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______, KC_PLUS, KC_EQL,    KC_BSLS,
		KC_CAPS,     _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
		________________, RESET,   _______, _______, _______, _______, _______, _______, KC_LPRN, KC_PGUP,   KC_RPRN,
		_______, _______, _______, _________________________, _________________________, KC_HOME, KC_PGDOWN, KC_END),

	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PLUS, KC_EQL,  KC_DEL,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS,
		_______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		KC_CAPS,          RESET,   _______, _______, _______, _______, _______, _______, KC_LBRC, _______, KC_RBRC,
		_______, _______, _______, _________________________, _________________________, _______, _______, _______),

	LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		___________, _______, _______, _______, _______, _______, _______, _______, _______, _______, ___________,
		________________, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _________________________, _________________________, _______, _______, _______),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( T(C), T(D), T(SPC), T(SLSH), T(S), T(R), T(V), T(SLSH), T(G), T(A), T(M), T(E), T(S), T(W), T(I), T(T), T(H), T(F), T(R), T(I), T(E), T(N), T(D), T(S), T(SLSH), T(C), T(U), T(R), T(R), T(E), T(N), T(T), T(SPC), D(LSFT), T(8), T(SPC), T(B), T(U), T(N), T(D), T(L), T(E), T(SPC), T(E), T(X), T(E), T(C), T(SPC), T(R), T(A), T(I), T(L), T(S), T(SPC), T(C), T(ENT), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRB |= (1 << 2); PORTB &= ~(1 << 2);
	} else {
		DDRB &= ~(1 << 2); PORTB &= ~(1 << 2);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
