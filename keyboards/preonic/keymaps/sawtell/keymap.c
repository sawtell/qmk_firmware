#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |Enter |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Fn  | Alt  | Cmd  |Lower |    Space    |Raise | Ctrl | Left | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_preonic_1x2uC(
  KC_ESC,       KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
  KC_TAB,       KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_ENT,
  KC_CAPS,      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
  KC_LSFT,      KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_UP,      KC_RSFT,
  KC_LCTL,      MO(4),      KC_LALT,    KC_LGUI,    MO(2),      KC_SPC,     MO(3),      KC_LCTL,    KC_LEFT,    KC_DOWN,    KC_RGHT
),

/* Game
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |Enter |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Fn  | Alt  | Cmd  |Space |    Space    |Adjust| Ctrl | Left | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_preonic_1x2uC(
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,  KC_TRNS, MO(5),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* Symbols
 * ,-----------------------------------------------------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F11 |  F12 |      |      |      |      |   -  |   [  |   ]  |   =  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   _  |   {  |   }  |   \  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   |  |   <  |   >  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |    Space    |Adjust|   0  |   .  |   .  |      |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_preonic_1x2uC(
KC_NO,      KC_F1,  KC_F2,      KC_F3,      KC_F4,      KC_F5,  KC_F6,  KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_DEL,
KC_NO,      KC_F11, KC_F12,     KC_NO,      KC_NO,      KC_NO,  KC_NO,  KC_MINS,    KC_LBRC,    KC_RBRC,    KC_EQL,     KC_NO,
KC_NO,      KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,  KC_NO,  KC_UNDS,    KC_LCBR,    KC_RCBR,    KC_BSLS,    KC_NO,
KC_LSFT,    KC_GRV, KC_NO,      KC_NO,      KC_NO,      KC_NO,  KC_NO,  KC_PIPE,    KC_LT,      KC_GT,      KC_SLSH,    KC_NO,
KC_LCTL,    KC_NO,  KC_LALT,    KC_LGUI,    KC_TRNS,    KC_SPC, MO(5),  KC_NO,      KC_NO,      KC_NO,      KC_NO
),

/* Numbers
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |   /  |   7  |   8  |   9  |   *  |Enter |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |   -  |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |   %  |   1  |   2  |   3  |   .  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Adjust|    Space    |      |   0  |   .  |   .  |      |
 * `-----------------------------------------------------------------------------------'
 */
[3] = LAYOUT_preonic_1x2uC(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO,  KC_NO,      KC_NO,   KC_NO,      KC_DEL,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS,  KC_P7,  KC_P8,      KC_P9,   KC_PAST,    KC_ENT,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PMNS,  KC_P4,  KC_P5,      KC_P6,   KC_PPLS,    KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PERC,  KC_P1,  KC_P2,      KC_P3,   KC_PDOT,    KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, MO(5), KC_NO, KC_TRNS,  KC_P0,  KC_PDOT,    KC_DOT,  KC_EQL
),


/* Fn
* ,-----------------------------------------------------------------------------------.
* |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | Del  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      | PgUp |      |      |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |      |      |      |      | Home |PgDown| End  |      |      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* | Shift|      |      |      |      |      |      |      |      | Play |VolUp | Mute |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |   V  |      |      |      |    Space    |      |      |Prev |VolDwn | Next |
* `-----------------------------------------------------------------------------------'
*/
[4] = LAYOUT_preonic_1x2uC(
KC_NO,      KC_F1,      KC_F2,  KC_F3, KC_F4, KC_F5, KC_F6, KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_DEL,
KC_NO,      KC_F11,     KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_PGUP,    KC_NO,      KC_NO,      KC_NO,
KC_NO,      KC_NO,      KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME,    KC_PGDN,    KC_END,     KC_NO,      KC_NO,
KC_LSFT,    KC_NO,      KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO,      KC_MPLY,    KC_VOLU,    KC_MUTE,
KC_NO,      KC_TRNS,    KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_MRWD,    KC_VOLD,    KC_MFFD
),

/* Adjust
* ,-----------------------------------------------------------------------------------.
* |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | Del  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |Au on |Auoff | Game | Mac  | Win  |      |      |      |      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |      |MV Dwn|MV up |Mu on |Mu off|BL Tog|RGB Tg|      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |   V  |      |      |      |    Space    |      |      |      |      |      |
* `-----------------------------------------------------------------------------------'
*/
[5] = LAYOUT_preonic_1x2uC(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, RESET, DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, MU_MOD, AU_ON, AU_OFF, DF(1), AG_NORM, AG_SWAP, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, MUV_DE, MUV_IN, MU_ON, MU_OFF, BL_TOGG, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
)
};
