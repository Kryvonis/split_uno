#include QMK_KEYBOARD_H

enum layer_names {
    _BL,
    _FL,
    _CL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        KC_F7,    KC_F8,   KC_F9,   KC_F10,    KC_F11,  KC_F12,    KC_F13,                              KC_ESC,    KC_F1,   KC_F2,     KC_F3,     KC_F4,          KC_F5,     KC_F6,
        KC_CAPS,  KC_P6,   KC_P7,   KC_P8,     KC_P9,   KC_P0,     KC_MPLY,                             KC_TAB,    KC_P1,   KC_P2,     KC_P3,     KC_P4,          KC_P5,     KC_P6,
        KC_TAB,   KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,      KC_MINS,                             KC_CAPS,   KC_Q,    KC_W,      KC_E,      KC_R,           KC_T,      KC_Y,
        KC_RBRC,  KC_H,    KC_J,    KC_K,      KC_L,    KC_SCLN,   KC_QUOT,                             KC_LCTL,   KC_A,    KC_S,      KC_D,      KC_F,           KC_G,      KC_LBRC,
        KC_LCTL,  KC_N,    KC_M,    KC_COMM,   KC_DOT,  KC_SLSH,   KC_RSFT,                             KC_LSFT,   KC_Z,    KC_X,      KC_C,      KC_V,           KC_B,      KC_Z,
        KC_MUTE,    KC_P8,   KC_P9,   KC_ENT,   MS_BTN1,   MS_BTN2,                                     MS_BTN2,   MS_BTN1,   KC_DEL,         KC_SPACE,  KC_ENTER,
                                                                                                        KC_BACKSPACE,   KC_LALT,   KC_LGUI
    )
};
