// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _AZERTY = 0,
    _NAV
    _NUM,
    _SYMBOL,
};

#define xxxxxxx KC_NO

#define LY_NUM MO(_NUM)
#define LY_SYM MO(_SYMBOL)
#define RY_NAV MO(_NAV)
#define RY_SYM MO(_)
#define ALT_GR OSM(MOD_RALT)

//GASC
#define MKC_Q MT(MOD_LGUI, KC_Q)
#define MKC_S MT(MOD_LALT, KC_S)
#define MKC_D MT(MOD_LSFT, KC_D)
#define MKC_F MT(MOD_LCTL, KC_F)

#define MKC_M MT(MOD_LGUI, KC_M)
#define MKC_L MT(MOD_LALT, KC_L)
#define MKC_K MT(MOD_LSFT, KC_K)
#define MKC_J MT(MOD_LCTL, KC_J)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_AZERTY] = LAYOUT(
     KC_ESC , KC_A   , KC_Z   , KC_E   , KC_R   , KC_T   ,                                        KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
     KC_TAB , MKC_Q  , MKC_S  , MKC_D  , MKC_F  , KC_G   ,                                        KC_H   , MKC_J  , MKC_K  , MKC_L  , MKC_M  , KC_QUOT,
     xxxxxxx, KC_W   , KC_X   , KC_C   , KC_V   , KC_B   , KC_LBRC,                      KC_RBRC, KC_N   , KC_SCLN, KC_COMM, KC_DOT , KC_UP  , KC_EQL ,
     xxxxxxx, KC_BSLS, OS_RALT,          _______, LY_NUM , KC_ENT , LY_SYM,      RY_NAV, KC_SPC , KC_MINS, KC_SLSH,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_NAV] = LAYOUT(
     xxxxxxx, xxxxxxx, KC_F7  , KC_F8  , KC_F9  , KC_VOLU,                                        KC_F10 , KC_F11 , KC_F12 , xxxxxxx, xxxxxxx, KC_PGUP,
     xxxxxxx, xxxxxxx, KC_F4  , KC_F5  , KC_F6  , KC_VOLD,                                        KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, xxxxxxx, KC_PGDN,
     xxxxxxx, xxxxxxx, KC_F1  , KC_F2  , KC_F3  , xxxxxxx, xxxxxxx,                      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
     xxxxxxx, xxxxxxx, xxxxxxx,          _______, _______, _______, _______,    _______, _______, _______, _______,          xxxxxxx, xxxxxxx, KC_NO
    ),
    [_NUM] = LAYOUT(
     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_PPLS, KC_PAST,                                        xxxxxxx, KC_P7  , KC_P8  , KC_P9  , xxxxxxx, xxxxxxx,
     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_PMNS, KC_PSLS,                                        KC_P0  , KC_P4  , KC_P5  , KC_P6  , KC_PEQL, xxxxxxx,
     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                      xxxxxxx, xxxxxxx, KC_P1  , KC_P2  , KC_P3  , KC_PENT, xxxxxxx,
     xxxxxxx, xxxxxxx, xxxxxxx,          _______, _______, _______, _______,    _______, _______, _______, _______,          xxxxxxx, xxxxxxx, KC_NO
    ),
    [_SYMBOL] = LAYOUT(
     xxxxxxx, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC,                                        KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, KC_UNDS, xxxxxxx,
     xxxxxxx, KC_PLUS, KC_LCBR, KC_RCBR, KC_COLN, KC_DQUO,                                        KC_LT  , KC_GT  , KC_QUES, KC_QUOT, xxxxxxx, xxxxxxx,
     xxxxxxx, KC_EQL , KC_EXLM, KC_PIPE, KC_MINS, KC_NUHS, KC_LPRN,                      KC_RPRN, KC_TILD, KC_COMM, KC_DOT , KC_SLSH, xxxxxxx, xxxxxxx,
     xxxxxxx, xxxxxxx, xxxxxxx,          _______, _______, _______, _______,    _______, _______, _______, _______,          xxxxxxx, xxxxxxx, xxxxxxx
    ),
};

//  Template:
//    [_INDEX] = LAYOUT(
//     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                                        xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
//     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                                        xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
//     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
//     xxxxxxx, xxxxxxx, xxxxxxx,          _______, _______, _______, _______,    _______, _______, _______, _______,          xxxxxxx, xxxxxxx, xxxxxxx
//    ),
