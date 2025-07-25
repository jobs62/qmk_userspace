// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _AZERTY = 0,
    _NUM,
};

#define xxxxxxx KC_NO

#define LY_NAV OSL(_NUM)
#define RY_NAV MO(_NUM)
#define ALT_GR OSM(MOD_RALT)
#define OSM_SFT OSM(MOD_LSFT)

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
     KC_ESC,  KC_A,    KC_Z,    KC_E,    KC_R,    KC_T,                                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
     KC_TAB,  MKC_Q,   MKC_S,   MKC_D,   MKC_F,   KC_G,                                           KC_H,    MKC_J,   MKC_K,   MKC_L,   MKC_M,   KC_QUOT,
     _______, KC_W,    KC_X,    KC_C,    KC_V,    KC_B,   KC_LBRC,                       KC_RBRC, KC_N,    KC_SCLN, KC_COMM, KC_DOT,  KC_UP,   KC_EQL,
     _______, KC_BSLS, ALT_GR,          _______, LY_NAV,  OSM_SFT, KC_ENT,        KC_SPC, RY_NAV, KC_MINS, KC_SLSH,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_NUM] = LAYOUT(
     _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_PGUP,
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                         KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, KC_PGDN,
     _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_LPRN,                       KC_RPRN, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_TRNS,
     KC_F11 , KC_F12 , KC_LCTL,          _______, _______, _______, _______,     _______, _______, KC_GRV, _______,          KC_RCTL, KC_HOME, KC_END
    ),
};
