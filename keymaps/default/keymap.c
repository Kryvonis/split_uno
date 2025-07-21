#include QMK_KEYBOARD_H

enum custom_keycodes {
    DRAG_SCROLL = SAFE_RANGE,
};

bool set_scrolling = false;
// Modify these values to adjust the scrolling speed
#define SCROLL_DIVISOR_H 8.0
#define SCROLL_DIVISOR_V 20.0

// Variables to store accumulated scroll values
float scroll_accumulated_h = 0;
float scroll_accumulated_v = 0;

// Function to handle mouse reports and perform drag scrolling
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    // Check if drag scrolling is active

    if (set_scrolling) {
        // Calculate and accumulate scroll values based on mouse movement and divisors
        scroll_accumulated_h += (float)mouse_report.x / SCROLL_DIVISOR_H;
        scroll_accumulated_v -= (float)mouse_report.y / SCROLL_DIVISOR_V;

        // Assign integer parts of accumulated scroll values to the mouse report
        mouse_report.h = (int8_t)scroll_accumulated_h;
        mouse_report.v = (int8_t)scroll_accumulated_v;

        // Update accumulated scroll values by subtracting the integer parts
        scroll_accumulated_h -= (int8_t)scroll_accumulated_h;
        scroll_accumulated_v -= (int8_t)scroll_accumulated_v;

        // Clear the X and Y values of the mouse report
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == DRAG_SCROLL && record->event.pressed) {
        set_scrolling = !set_scrolling;
    }
    return true;
}

enum layer_names {
    _BL,
    _FL,
    _CL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        KC_ESC,    KC_F1,   KC_F2,     KC_F3,     KC_F4,          KC_F5,         KC_F6,
        KC_CAPS,    KC_1,    KC_2,      KC_3,      KC_4,           KC_5,          KC_6,
        KC_TAB,     KC_Q,    KC_W,      KC_E,      KC_R,           KC_T,          KC_MUTE,
        KC_LCTL,    KC_A,    KC_S,      KC_D,      KC_F,           KC_G,          KC_LBRC,
        KC_LSFT,    KC_Z,    KC_X,      KC_C,      KC_V,           KC_B,          DRAG_SCROLL,

                                      KC_WBAK,   KC_WFWD,   KC_LGUI,   KC_SPACE,           LT(_FL,KC_ENT),
                                                            KC_LALT,   KC_BACKSPACE,       LT(_CL, KC_DEL),



        KC_F7,       KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_BSLS,
        KC_CAPS,     KC_6,     KC_7,     KC_8,      KC_9,      KC_0,      KC_EQL,
        KC_TAB,      KC_Y,     KC_U,     KC_I,      KC_O,      KC_P,      KC_MINS,
        KC_RBRC,     KC_H,     KC_J,     KC_K,      KC_L,      KC_SCLN,   KC_QUOT,
        KC_BSLS,     KC_N,     KC_M,     KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,

        DRAG_SCROLL,  KC_BACKSPACE, LT(_CL, KC_DEL),  LT(_FL,KC_ENT),    MS_BTN1,   MS_BTN2
    ),



    [_FL] = LAYOUT(
        _______,    KC_PGUP,   KC_PGDN,     KC_F3,     _______,            _______,          QK_BOOT,
        KC_GRAVE,    KC_1,      KC_2,        KC_3,      _______,            _______,          _______,
        _______,    KC_4,      KC_5,        KC_6,      _______,            _______,          _______,
        _______,    KC_7,      KC_8,        KC_9,      KC_0,               _______,          _______,
        _______,    _______,   _______,     _______,   _______,            _______,          _______,

                               MS_BTN2,     MS_BTN1,   _______,            _______,       _______,
                                                       _______,            _______,       _______,




        _______,        _______,        _______,     _______,       _______,       _______,   _______,
        _______,        _______,        _______,     _______,       _______,       _______,   _______,
        _______,        _______,        _______,     _______,       _______,       _______,   _______,
        _______,        KC_LEFT,        KC_DOWN,     KC_UP,         KC_RIGHT,      KC_BSLS,   _______,
        KC_MPRV,        KC_MPLY,        KC_MNXT,     _______,       _______,       KC_NUBS,   _______,

        _______,    _______,   _______,  _______,    KC_VOLD,   KC_VOLU
    ),



    [_CL] = LAYOUT(
        _______,    _______,      KC_PGDN,     KC_F3,     KC_F4,           KC_F5,         QK_BOOT,
        _______,     KC_1,         KC_2,        KC_3,      KC_4,            KC_5,          KC_6,
        _______,     KC_4,         KC_5,        KC_6,      KC_R,            KC_T,          KC_Y,
        _______,    KC_MUTE,      KC_MPLY,     KC_MPRV,   KC_MNXT,         KC_G,          KC_LBRC,
        _______,    _______,         _______,        KC_VOLD,   KC_VOLU,         _______,       TG(_FL),

                                    MS_BTN2,   MS_BTN1,   KC_DEL,          KC_SPACE,      KC_ENT,
                                                          KC_BACKSPACE,    KC_RALT,       KC_LGUI,



        _______,     _______,    _______,    _______,    _______,    _______,    QK_BOOT,
        _______,     _______,    _______,    _______,    _______,      _______,      _______,
        _______,     _______,    _______,    _______,    _______,      _______,      _______,
        _______,     _______,    _______,    _______,    _______,      _______,   KC_QUOT,
        _______,     _______,    _______,    _______,    _______,    _______,   _______,

        _______,    _______,   _______,  _______,    KC_VOLD,   KC_VOLU
    ),
};
