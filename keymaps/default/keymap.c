#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,     KC_F4,   KC_F5,   KC_F6,                    KC_F7,    KC_F8,   KC_F9,   KC_F10,    KC_F11,  KC_F12,  KC_F13,
        KC_TAB,   KC_Q,    KC_P9,   KC_PSLS,   KC_P7,   KC_P8,   KC_P9,                    KC_CAPS,  KC_P8,   KC_P9,   KC_PSLS,   KC_P7,   KC_P6,   KC_P9,
        KC_TAB,   KC_Q,    KC_W,    KC_E,      KC_R,    KC_T,    KC_P,                     KC_TAB,   KC_P8,   KC_P9,   KC_PSLS,   KC_P7,   KC_P7,   KC_P9,
        KC_LSFT,  KC_P8,   KC_P9,   KC_PSLS,   KC_P7,   KC_P8,   KC_P9,                    KC_LSFT,  KC_P8,   KC_P9,   KC_PSLS,   KC_P7,   KC_P5,   KC_P9,
        KC_LCTL,  KC_P8,   KC_P9,   KC_PSLS,   KC_P7,   KC_P8,   KC_P9,                    KC_LCTL,  KC_P8,   KC_P9,   KC_PSLS,   KC_P7,   KC_P4,   KC_P9,
                           KC_P7,   KC_P8,     KC_P9,   KC_PSLS, KC_P7,                    KC_P7,    KC_P8,   KC_P9,   KC_PSLS,   KC_P7,   KC_P7,
                                               KC_P7,   KC_P8,   KC_P9
    )
};
