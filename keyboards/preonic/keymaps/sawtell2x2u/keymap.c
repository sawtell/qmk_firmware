/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |Enter |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Fn  | Alt  | Cmd  | Enter/Lower | Space/Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_preonic_2x2u(
  KC_ESC,           KC_1,   KC_2,       KC_3,       KC_4,   KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
  KC_TAB,           KC_Q,   KC_W,       KC_E,       KC_R,   KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_ENT,
  LT(5, KC_CAPS),   KC_A,   KC_S,       KC_D,       KC_F,   KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
  KC_LSFT,          KC_Z,   KC_X,       KC_C,       KC_V,   KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
  KC_LCTL,          MO(8),  KC_LALT,    KC_LGUI,    LT(4,KC_ENT),   LT(6,KC_SPC),   KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
),

/* Game
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |Enter |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |   \  | Win  | Alt  |    Space    | Space/Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_preonic_2x2u(
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_LCTL, KC_BSLS, KC_LGUI, KC_LALT, KC_SPC,  LT(7,KC_SPC),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* Colemak D
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  | Enter|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   R  |   S  |   T  |   G  |   H  |   N  |   E  |   I  |   O  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   D  |   V  |   K  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Fn  | Alt  | Cmd  | Enter/Lower | Space/Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_preonic_2x2u(
  KC_ESC,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,           KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_ENT,
  LT(5, KC_CAPS),   KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_LCTL,          MO(8),  KC_LALT,  KC_LGUI, LT(4,KC_ENT),   LT(6,KC_SPC),       KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
),

/* Colemak-DH
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  | Enter|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   R  |   S  |   T  |   G  |   M  |   N  |   E  |   I  |   O  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   D  |   V  |   K  |   H  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Fn  | Alt  | Cmd  || Enter/Lower | Space/Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[3] = LAYOUT_preonic_2x2u(
  KC_ESC,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,           KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_ENT,
  LT(5, KC_CAPS),   KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_LCTL,          MO(8),  KC_LALT,  KC_LGUI, LT(4,KC_ENT),   LT(6,KC_SPC),       KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
),


/* 4 - Symbols
 * ,-----------------------------------------------------------------------------------.
 * |   §  |   !  |   @  |   £  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   ^  |   *  |   [  |      |      |   ]  |   -  |   >  |   =  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   !  |   &  |   $  |   (  |   <  |   >  |   )  |   _  |   |  |   \  |   *  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   `  |      |      |   {  |      |      |   }  |   <  |   >  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      VVV    |    Space    |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[4] = LAYOUT_preonic_2x2u(
KC_NUBS,    KC_EXLM,    KC_AT,      KC_NUHS,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_PAST,    KC_LPRN,    KC_RPRN,  KC_DEL,
KC_NO,      KC_NO,      KC_CIRC,    KC_PAST,    KC_LBRC,    KC_PERC,    KC_NO,      KC_RBRC,    KC_MINS,    KC_GT,      KC_EQL,   KC_NO,
KC_NO,      KC_EXLM,    KC_AMPR,    KC_DLR,     KC_LPRN,    KC_LT,      KC_GT,      KC_RPRN,    KC_UNDS,    KC_PIPE,    KC_BSLS,  KC_PAST,
KC_LSFT,    KC_GRV,     KC_NO,      KC_NO,      KC_LCBR,    KC_NO,      KC_NO,      KC_RCBR,    KC_LT,      KC_GT,      KC_NO,    KC_NO,
KC_LCTL,    KC_NO,      KC_LALT,    KC_LGUI,    KC_TRNS,    LT(7,KC_SPC),           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
),

/* 5 - Numbers
 * ,-----------------------------------------------------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | BkSp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |   /  |   7  |   8  |   9  |   *  |Enter |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  VVV |      |      |      |      |      |   -  |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |   %  |   1  |   2  |   3  |   .  |   =  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |             |      0      |   .  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[5] = LAYOUT_preonic_2x2u(
KC_NO, KC_F1,   KC_F2,      KC_F3,      KC_F4,      KC_F5,   KC_F6,    KC_F7,  KC_F8,   KC_F9,   KC_F10,     KC_BSPC,
KC_NO, KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,   KC_PSLS,  KC_P7,  KC_P8,   KC_P9,   KC_PAST,    KC_ENT,
KC_NO, KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,   KC_PMNS,  KC_P4,  KC_P5,   KC_P6,   KC_PPLS,    KC_NO,
KC_NO, KC_NO,   KC_NO,      KC_NO,      KC_NO,      KC_NO,   KC_PERC,  KC_P1,  KC_P2,   KC_P3,   KC_PDOT,    KC_EQL,
KC_NO, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_P0,   KC_PDOT,  KC_NO,  KC_NO,   KC_NO
),


/* 6 - Raise (left symbols)
* ,-----------------------------------------------------------------------------------.
* |   §  |   !  |   @  |   £  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |   ^  |   *  |   [  |   %  |      | Home |  Up  |  End | PgUp |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |   !  |   &  |   $  |   (   |  <  |      | Left | Down |Right |PgDown|      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* | Shift|   `  |      |      |   {  |      |      |      |      |      |      | Shift|
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |Enter/Adjust |     VVV     |      |      |      |      |
* `-----------------------------------------------------------------------------------'
*/
[6] = LAYOUT_preonic_2x2u(
KC_NUBS,    KC_EXLM,    KC_AT,      RSFT(KC_P3),KC_DLR,     KC_PERC,      KC_CIRC,      KC_AMPR,      KC_PAST,      KC_LPRN,      KC_RPRN,    KC_DEL,
KC_NO,      KC_NO,      KC_CIRC,    KC_PAST,    KC_LBRC,    KC_PERC,    KC_NO,      KC_HOME,    KC_UP,      KC_END,     KC_PGUP,  KC_NO,
KC_NO,      KC_EXLM,    KC_AMPR,    KC_DLR,     KC_LPRN,    KC_LT,      KC_NO,      KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,  KC_NO,
KC_LSFT,    KC_GRV,     KC_NO,      KC_NO,      KC_LCBR,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,    KC_RSFT,
KC_LCTL,    KC_NO,      KC_LALT,    KC_LGUI,    LT(7,KC_ENT),           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
),

/* 7 - Adjust
* ,-----------------------------------------------------------------------------------.
* |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |Reset |Debug |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |Au on |Auoff | Mac  | Win  |QWERTY| Game |Colmak|ClmKDH|      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |      |MV Dwn|MV up |Mu on |Mu off|BL Tog|RGBTg||      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |     VVV     |     VVV     |      |      |      |      |
* `-----------------------------------------------------------------------------------'
*/
[7] = LAYOUT_preonic_2x2u(
KC_NO,  KC_NO,   KC_NO,     KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO,  RESET,   DEBUG,     KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO,  KC_NO,   MU_MOD,    AU_ON,  AU_OFF,     AG_NORM,    AG_SWAP,    DF(0),  DF(1), DF(2), DF(3), KC_NO,
KC_NO,  MUV_DE,  MUV_IN,    MU_ON,  MU_OFF,     BL_TOGG,    RGB_TOG,    KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO,  KC_NO,   KC_NO,     KC_NO,  KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,  KC_NO, KC_NO
),

/* 8 - Fn extras
* ,-----------------------------------------------------------------------------------.
* |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | Del  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |  F11 |  F12 |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      | Play | Prev | Next | Mute |VolDwn| VolUp|      |      |      |      |      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* | Shift|      |      |      |      |      |      |      |      | Mute |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      | VVV  |      |      |    Play     |    Mute     | Prev |VolDwn| VolUp| Next |
* `-----------------------------------------------------------------------------------'
*/
[8] = LAYOUT_preonic_2x2u(
KC_NO,      KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,      KC_NO,
KC_NO,      KC_F11,     KC_F12,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_HOME,    KC_UP,      KC_END,     KC_PGUP,    KC_NO,
KC_NO,      KC_MPLY,    KC_MRWD,    KC_MFFD,    KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,    KC_NO,
KC_LSFT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_MUTE,    KC_NO,      KC_NO,      KC_RSFT,
KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_MPLY,    KC_MUTE,    KC_MRWD,    KC_VOLD,    KC_VOLU,    KC_MFFD
),
};
