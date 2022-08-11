#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _SYMBOLS,
  _NUM
};
// enum combo_events {
//   COMBO_BSPC,
//   COMBO_NUMBAK,
//   COMBO_TAB,
//   COMBO_ESC,
//   COMBO_DEL,
// };

// #define KC_NUM_SPC LT(_NUM_SYM, KC_SPC)
// #define KC_GA LGUI_T(KC_A)
// #define KC_AS LALT_T(KC_S)
// #define KC_CD LCTL_T(KC_D)
// #define KC_SF LSFT_T(KC_F)
// #define KC_SJ RSFT_T(KC_J)
// #define KC_CK RCTL_T(KC_K)
// #define KC_AL RALT_T(KC_L)
// #define KC_GSCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
		KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN,
		KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O,
		KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SPC,
		KC_LCTL, KC_LGUI, MO(1), KC_SPC, KC_SPC, KC_ENT, MO(2), KC_LALT, KC_SPC),

  [_SYMBOLS] = LAYOUT(
		KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC,
		KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET),

  [_NUM] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_8, KC_9,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_4, KC_5, KC_6,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_1, KC_2, KC_3,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bspc[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_numbak[] = {KC_0, KC_9, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_MINS, KC_EQL, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_BSPC] = COMBO(combo_bspc,KC_BSPC),
  [COMBO_NUMBAK] = COMBO(combo_numbak,KC_BSPC),
  [COMBO_TAB] = COMBO(combo_tab,KC_TAB),
  [COMBO_ESC] = COMBO(combo_esc,KC_ESC),
  [COMBO_DEL] = COMBO(combo_del,KC_DEL),

};
#endif
