#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_HHKB(LCA_T(KC_GRV), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, TG(3), LCAG_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TG(1), KC_NO, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, KC_RALT, KC_NO),
	[1] = LAYOUT_HHKB(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_LEFT), KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_NO, LALT(KC_RGHT), LALT(KC_RGHT), SGUI(KC_Z), KC_NO, KC_NO, LGUI(KC_Z), TO(0), KC_NO, LGUI(KC_V), KC_NO, KC_NO, KC_BSPC, TO(0), LGUI(KC_RGHT), KC_NO, KC_NO, KC_NO, OSL(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_ENT, MO(5), KC_NO, KC_DEL, KC_NO, TG(2), LALT(KC_LEFT), KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_F), MO(5), KC_NO, KC_NO, KC_LCTL, MO(6), KC_NO, MO(6), KC_RALT, KC_NO),
	[2] = LAYOUT_HHKB(RESET, KC_NO, KC_NO, KC_NO, SGUI(KC_LEFT), KC_NO, SGUI(KC_RGHT), KC_NO, KC_NO, KC_NO, SGUI(KC_LEFT), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TAB, KC_NO, LSFT(LALT(KC_RIGHT)), LSFT(LALT(KC_RIGHT)), KC_NO, KC_NO, LGUI(KC_C), KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_BSPC, TO(0), LGUI(KC_A), KC_NO, LGUI(KC_X), KC_NO, KC_NO, RSFT(KC_LEFT), RSFT(KC_DOWN), RSFT(KC_UP), RSFT(KC_RGHT), KC_NO, KC_NO, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, LSFT(LALT(KC_RIGHT)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(6), KC_NO, MO(6), KC_NO, KC_NO),
	[3] = LAYOUT_HHKB(KC_NO, LCA(KC_U), LCA(KC_I), LCA(KC_J), LCA(KC_K), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, LCA(KC_E), KC_NO, LCA(KC_T), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, LCA(KC_D), LCA(KC_F), LCA(KC_G), LCA(KC_LEFT), LCA(KC_DOWN), LCA(KC_UP), LCA(KC_RGHT), KC_NO, KC_NO, LCA(KC_ENT), KC_NO, KC_NO, KC_NO, LCA(KC_C), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCAG(KC_LEFT), MO(6), KC_NO, MO(6), LCAG(KC_RGHT), KC_NO),
	[4] = LAYOUT_HHKB(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_UP), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_HHKB(KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_RGHT), KC_NO, LGUI(KC_LEFT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_DOWN), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, MO(7), KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_HHKB(LGUI(KC_GRV), LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), LGUI(KC_MINS), LGUI(KC_EQL), LGUI(KC_BSLS), KC_NO, LGUI(KC_TAB), LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T), LGUI(KC_Y), LGUI(KC_U), LGUI(KC_I), LGUI(KC_O), LGUI(KC_P), LGUI(KC_LBRC), LGUI(KC_RBRC), LGUI(KC_BSPC), LGUI(KC_ESC), LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), LGUI(KC_G), LGUI(KC_H), LGUI(KC_J), LGUI(KC_K), LGUI(KC_L), LGUI(KC_SCLN), LGUI(KC_QUOT), LGUI(KC_ENT), KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B), LGUI(KC_N), LGUI(KC_M), LGUI(KC_COMM), LGUI(KC_DOT), LGUI(KC_SLSH), KC_RSFT, KC_NO, KC_NO, KC_NO, KC_TRNS, LGUI(KC_SPC), KC_TRNS, KC_NO, KC_NO),
	[7] = LAYOUT_HHKB(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_Q), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_W), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
