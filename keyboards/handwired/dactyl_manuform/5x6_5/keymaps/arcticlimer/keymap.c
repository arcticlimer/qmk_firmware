#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define MODRSFT MT(MOD_RSFT, KC_QUOT)
#define MODRCTL MT(MOD_RCTL, KC_BSLASH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6_5(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                          KC_6 , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                          KC_Y , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                          KC_H , KC_J  , KC_K  , KC_L  ,KC_SCLN,MODRSFT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                          KC_N , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,MODRCTL,
                         KC_LBRC,KC_RBRC,RAISE ,KC_SPC ,KC_LALT,          KC_LALT,KC_ENT,LOWER ,KC_PLUS,KC_EQL ,
                                                _______,KC_GRV ,          _______,KC_LGUI
    ),

    [_LOWER] = LAYOUT_5x6_5(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        _______,_______,_______,KC_WH_D,KC_WH_U,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
        _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
        _______,_______,KC_DEL ,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                        _______,KC_PSCR,_______,_______,_______,        _______,_______,_______,_______,KC_P0,
                                                _______,_______,        _______,_______
    ),

    [_RAISE] = LAYOUT_5x6_5(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_MUTE,
          _______,_______,_______,_______,_______,_______,                        KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,KC_VOLU,
          _______,_______,_______,_______,_______,_______,                        KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,_______,KC_VOLD,
                          _______,_______,_______,_______,_______,        _______,KC_BTN1,KC_BTN2,_______,_______,
                                                  _______,_______,        _______,_______
    )
};
