#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_preonic_grid(LT(3,KC_GRV), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, MEH_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT), MO(3), KC_LCTL, KC_LALT, OSM(MOD_LGUI), LT(1,KC_LBRC), KC_SPC, KC_SPC, LT(1,KC_RBRC), RGUI_T(KC_LEFT), RALT_T(KC_DOWN), RCTL_T(KC_UP), KC_RGHT),
	[1] = LAYOUT_preonic_grid(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_ENT, KC_NO, KC_LCTL, KC_LALT, OSM(MOD_LGUI), KC_TRNS, KC_MPLY, KC_MPLY, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT),
	[2] = LAYOUT_preonic_grid(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_preonic_grid(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCA(KC_Q), LCA(KC_W), LCA(KC_E), KC_NO, LCA(KC_T), KC_NO, KC_NO, KC_NO, KC_NO, LCA(KC_P), LCA(KC_BSPC), KC_NO, LCA(KC_A), LCA(KC_S), LCA(KC_D), LCA(KC_F), LCA(KC_G), LCA(KC_H), LCA(KC_J), LCA(KC_K), LCA(KC_L), KC_NO, LCA(KC_QUOT), KC_NO, KC_NO, KC_NO, LCA(KC_C), KC_NO, KC_NO, LCA(KC_N), KC_NO, LCA(KC_COMM), LCA(KC_DOT), KC_NO, LCA(KC_ENT), KC_TRNS, KC_NO, KC_NO, KC_NO, LCTL(KC_LEFT), LCTL(KC_UP), LCTL(KC_UP), LCTL(KC_RGHT), LCA(KC_H), LCA(KC_J), LCA(KC_K), LCA(KC_L))
};
