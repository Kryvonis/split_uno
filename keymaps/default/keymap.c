#include QMK_KEYBOARD_H

enum layer_names {
    _BL,
    _FL,
    _CL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_CAPS,    KC_F1,   KC_F2,     KC_F3,     KC_F4,         KC_F5,    KC_F6,
        KC_ESC,     KC_1,    KC_2,      KC_3,      KC_4,           KC_5,      KC_6,
        KC_TAB,     KC_Q,    KC_W,      KC_E,      KC_R,            KC_T,       KC_Y,
        KC_LCTL,    KC_A,    KC_S,      KC_D,      KC_F,           KC_G,      KC_LBRC,
        KC_LSFT,    KC_Z,    KC_X,      KC_C,      KC_V,           KC_B,      TG(_FL),
                            MS_BTN2,   KC_LSCR,   KC_BACKSPACE,   KC_SPACE,  KC_ENT,
                                                  KC_DEL,   KC_LALT,       KC_LGUI,

        KC_F7,       KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_MUTE,
        KC_CAPS,     KC_6,     KC_7,     KC_8,      KC_9,      KC_0,      KC_EQL,
        KC_TAB,      KC_Y,     KC_U,     KC_I,      KC_O,      KC_P,      KC_MINS,
        KC_RBRC,     KC_H,     KC_J,     KC_K,      KC_L,      KC_SCLN,   KC_QUOT,
        KC_LCTL,     KC_N,     KC_M,     KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,
        LT(1,MS_BTN1),     KC_BACKSPACE,   KC_DEL,   KC_ENT,    MS_BTN1,   MS_BTN2
    ),
    [1] = LAYOUT(
        QK_BOOT,    KC_F1,   KC_F2,     KC_F3,     KC_F4,         KC_F5,    KC_F6,
        KC_ESC,    KC_1,    KC_2,      KC_3,      KC_4,           KC_5,      KC_6,
        KC_TAB,   KC_4,    KC_5,      KC_6,      KC_R,            KC_T,       KC_Y,
        KC_LCTL,   KC_7,    KC_8,      KC_9,      KC_0,           KC_G,      TG(_BL),
        KC_LSFT,   KC_Z,    KC_X,      KC_C,      KC_V,           KC_B,      TG(_FL),
                            MS_BTN2,   MS_BTN1,   KC_DEL,         KC_SPACE,  KC_ENT,
                                                  KC_BACKSPACE,   KC_RALT,       KC_LGUI,

        KC_F7,       KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_MUTE,
        KC_CAPS,     KC_6,     KC_7,     KC_8,      KC_9,      KC_MRWD,      KC_MFFD,
        KC_TAB,      KC_Y,     KC_U,     KC_I,      KC_O,      KC_P,      KC_MINS,
        KC_LSFT,     KC_LEFT,     KC_DOWN,     KC_UP,      KC_RIGHT,      KC_SCLN,   KC_QUOT,
        KC_LCTL,     KC_N,     KC_M,     KC_COMM,   KC_MPLY,    KC_MPRV,   KC_MNXT,
        _______,    KC_BACKSPACE,   _______,  KC_ENT,    MS_BTN1,   MS_BTN2
    ),
};
