static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * Keymap Layer 0
    *
    * ,--------------------------------------------------.           ,--------------------------------------------------.
    * |   ~    |   1  |   2  |   3  |   4  |   5  | Mute |           | PrtSc |   6  |   7  |   8  |   9  |   0  |  Caps |
    * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
    * | Tab    |   Q  |   W  |   F  |   P  |   G  |  [  |            |  ]  |   J  |  L   |   U  |   Y   |   ;  |   |    |
    * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
    * | Esc    |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   "    |
    * |--------+------+------+------+------+------|  -   |           |  +  |------+------+------+------+------+--------|
    * | LShift  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   <  |   >  |   ?  | RShift|
    * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
    *   | LCtrl | LGui | LAlt | ~L1  | ~L2  |                                       |  DN |  Up  |  Lf  | Rt | RCtl  |
    *   `----------------------------------'                                       `----------------------------------'
    *                                        ,-------------.       ,-------------.
    *                                        | Vol-  | Vol+ |       | Play | Pause|
    *                                 ,------|------|------|       |------+------+------.
    *                                 |      |      |  Home|       | PgUp |      |      |
    *                                 | Space|  Del |------|       |------| Enter| BKSpc|
    *                                 |      |      |  End |       | PGDn |      |      |
    *                                 `--------------------'       `--------------------'
    *
    *
    *
    ****************************************************************************************************
    * Keymap Layer 1
    *
    * ,--------------------------------------------------.           ,--------------------------------------------------.
    * |   NULL |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  | F10  |   =    |
    * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
    * |  NULL  |NULL | NULL | NULL | NULL | NULL | NULL  |           | ~L6  | NULL | NULL | NULL | NULL | NULL | NULL |
    * |--------+------+------+------+------+-----|       |           |      |------+------+------+------+------+--------|
    * |  NULL |NULL | NULL | NULL | NULL | NULL  |-------|           |------| NULL | NULL | NULL | NULL | NULL | NULL |
    * |--------+------+------+------+------+-----| NULL  |           | ~L7  |------+------+------+------+------+--------|
    * | NULL  |NULL | NULL | NULL | NULL | NULL |        |           |      | NULL | NULL | NULL | NULL | NULL | NULL |
    * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
    *   |  NULL  | NULL | NULL | NULL | NULL |                                     | NULL | NULL  | NULL  |NULL | NULL |
    *   `----------------------------------'                                       `----------------------------------'
    *                                        ,-------------.       ,-------------.
    *                                        | NULL  | NULL |       | NULL | NULL  |
    *                                 ,------|------|-------|       |------+------+------.
    *                                 |      |      |  NULL |       | NULL |      |      |
    *                                 | TRNS | TRNS |------ |       |------| TRNS | TRNS |
    *                                 |      |      |  NULL |       | NULL |      |      |
    *                                 `--------------------'       `--------------------'
    *
    *
    *
    ****************************************************************************************************
    * Keymap Layer 2
    *
    * ,--------------------------------------------------.           ,--------------------------------------------------.
    * |   TNSY | NULL | NULL | NULL | NULL | NULL | NULL |           | NULL | NULL | NMLK |  /   |  *   | -    | NULL |
    * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
    * |  NULL  |NULL | NULL | NULL | NULL | NULL | NULL  |           | NULL | NULL | 7     | 8     | 9    | +    | NULL |
    * |--------+------+------+------+------+-----|       |           |      |------+------+------+------+------+--------|
    * |  NULL |NULL | NULL | NULL | NULL | NULL  |-------|           |------| :    | 4    | 5     | 6    | +    | NULL |
    * |--------+------+------+------+------+---- | NULL  |           | NULL |------+------+------+------+------+--------|
    * | NULL  |NULL | NULL | NULL | NULL | NULL  |       |           |      | / | 1    | 2     | 3    | ENTR | NULL |
    * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
    *   |  NULL  | NULL | NULL | NULL | NULL |                                     | 0    | 0    | .   | ENTR  | NULL |
    *   `----------------------------------'                                       `----------------------------------'
    *                                        ,-------------.       ,-------------.
    *                                        | NULL  | NULL |       | NULL | NULL  |
    *                                 ,------|------|-------|       |------+------+------.
    *                                 |      |      |  NULL |       | NULL |      |      |
    *                                 | TRNS | TRNS |------ |       |------| TRNS | TRNS |
    *                                 |      |      |  NULL |       | NULL |      |      |
    *                                 `--------------------'       `--------------------'
    *
    *
    *
    ****************************************************************************************************
    * Keymap TRANS
    *
    * ,--------------------------------------------------.           ,--------------------------------------------------.
    * |   TRNS |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  | F10  |   =    |
    * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
    * |  TRNS  |TRNS | TRNS | TRNS | TRNS | TRNS | TRNS  |           | ~L6  | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |
    * |--------+------+------+------+------+-----|       |           |      |------+------+------+------+------+--------|
    * |  TRNS |TRNS | TRNS | TRNS | TRNS | TRNS  |-------|           |------| TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |
    * |--------+------+------+------+------+-----| TRNS  |           | ~L7  |------+------+------+------+------+--------|
    * | TRNS  |TRNS | TRNS | TRNS | TRNS | TRNS |        |           |      | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |
    * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
    *   |  TRNS  | TRNS | TRNS | TRNS | TRNS |                                     | TRNS | TRNS  | TRNS  |TRNS | TRNS |
    *   `----------------------------------'                                       `----------------------------------'
    *                                        ,-------------.       ,-------------.
    *                                        | TRNS  | TRNS |       | TRNS | TRNS  |
    *                                 ,------|------|-------|       |------+------+------.
    *                                 |      |      |  TRNS |       | TRNS |      |      |
    *                                 | TRNS | TRNS |------ |       |------| TRNS | TRNS |
    *                                 |      |      |  TRNS |       | TRNS |      |      |
    *                                 `--------------------'       `--------------------'
    *
    *
    *
    *
    */

    KEYMAP(  // Layer0: default
        GRV ,   1,   2,   3,   4,   5,   MUTE,
        TAB ,   Q,   W,   F,   P,   G,   LBRC,
        ESC ,   A,   R,   S,   T,   D,
        LSFT,   Z,   X,   C,   V,   B,   MINS,
        LCTL,LGUI,LALT,FN21,FN22,
                                    VOLD,VOLU,
                                         HOME,
                                SPC, DEL, END,
        // right hand
             PSCR,6,   7,   8,   9,    0,CAPS,
             RBRC,J,   L,   U,   Y, SCLN,BSLS,
                  H,   N,   E,   I,    O,QUOT,
              EQL,K,   M, COMM, DOT,SLSH,RSFT,
                    DOWN,   UP,LEFT,RGHT,RCTL,
        MPLY,MSTP,
        PGDN,
        PGUP, ENT, BSPC
    ),

    KEYMAP(  // Layer1
        NO,  F1,  F2,  F3,  F4,  F5,  F11,
        NO,  NO,  NO,  NO,  NO,  NO,   NO,
        NO,  NO,  NO,   NO,  NO,  NO,
        NO,  NO,  NO,  NO,  NO,  NO,   NO,
        NO,  NO,  NO,  FN21,  NO,
                                      NO,  NO,
                                           NO,
                                 TRNS,TRNS,NO,
        // right hand
             F12, F6,  F7,  F8,  F9, F10,  NO,
              NO, NO,  NO,  NO,  NO,  NO,  NO,
                  NO,  NO,  NO,  NO,  NO,  NO,
              NO, NO,  NO,  NO,  NO,  NO,  NO,
                       NO,  NO,  NO,  NO,  NO,
        NO,  NO,
        NO,
        NO,  TRNS,  TRNS
    ),

    KEYMAP(  // Layer2: numpad
        NO,  NO,  NO,  NO,  NO,  NO,  NO,
        NO,  NO,  NO,  NO,  NO,  NO,  NO,
        NO,  NO,  NO,   NO,  NO,  NO,
        NO,  NO,  NO,  NO,  NO,  NO,  NO,
        NO,  NO,  NO,  NO,  FN22,
                                      NO,  NO,
                                           NO,
                                 TRNS,TRNS,NO,
        // right hand
             NO,  NO, NLCK, PSLS,PAST,PMNS,NO,
             NO,  NO,   P7,   P8,  P9,PPLS,NO,
                 FN1,   P4,   P5,  P6,PPLS,NO,
             NO,SLSH,   P1,   P2,  P3,PENT,NO,
                        P0,   P0,PDOT,PENT,NO,
        NO,  NO,
        NO,
        NO,  TRNS,  TRNS
    ),
};

/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
    CUSTOM_KEY,
    L_CTRL_ALT_ENT,
    R_CTRL_ALT_ENT,
};

enum macro_id {
    XMONAD_RESET,
    PASSWORD1,
    PASSWORD2,
    PASSWORD3,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key

    [1] =   ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),             // FN1  = Shifted SemiColon // : in Workman
    [2] =   ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN2  = Shifted Minus     // \ in Workman
    [3] =   ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN3  = Shifted comma     // < in Workman
    [4] =   ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN4  = Shifted dot       // > in Workman

    [5] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPC),         // FN5  = LShift with tap BackSpace
    [6] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_DEL),          // FN6  = LCtrl  with tap Delete
    [7] =   ACTION_MODS_TAP_KEY(MOD_LALT, KC_ESC),          // FN7  = LAlt   with tap Escape
    [8] =   ACTION_MODS_TAP_KEY(MOD_RGUI, KC_INS),          // FN8  = RGui   with tap Ins
    [9] =   ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),          // FN9  = RShift with tap Enter
    [10] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),          // FN10 = RCtrl  with tap Space

    [11] =  ACTION_MODS_TAP_KEY(MOD_LSFT, KC_TAB),          // FN11 = LShift with tap Tab
    [12] =  ACTION_MODS_TAP_KEY(MOD_LCTL, KC_GRV),          // FN12 = LCtrl  with tap Tilda
    [13] =  ACTION_MODS_TAP_KEY(MOD_LALT, KC_SPC),          // FN13 = LAlt   with tap Space
    [14] =  ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),          // FN14 = LGui   with tap Escape
    [15] =  ACTION_MODS_TAP_KEY(MOD_RSFT, KC_QUOT),         // FN15 = RShift with tap quotes
    [16] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RBRC),         // FN16 = RCtrl  with tap ]

    [17] =  ACTION_LAYER_SET(0, ON_BOTH),                   // FN17 - set Layer0
    [18] =  ACTION_LAYER_SET(1, ON_BOTH),                   // FN18 - set Layer1, to use Workman layout at firmware level
    [19] =  ACTION_LAYER_SET(2, ON_BOTH),                   // FN19 - set Layer2, to use with Numpad keys

    // i'd like to remove this - will try to get used to live without this and convert them to usual keys
    [20] =  ACTION_LAYER_MOMENTARY(2),                      // FN20 - momentary Layer2, to use with Numpad keys
    // or
    //  [20] =  ACTION_FUNCTION_TAP(CUSTOM_KEY),                // FN20 - use custom key, with tapping support

    //[21] =  ACTION_FUNCTION_TAP(L_CTRL_ALT_ENT),            // FN21 - momentary Layer5+CTRL+ALT on Enter, to use with F* keys on top row
    [21] =  ACTION_LAYER_MOMENTARY(1),            // FN21 - momentary Layer5+CTRL+ALT on Enter, to use with F* keys on top row
    //[22] =  ACTION_FUNCTION_TAP(R_CTRL_ALT_ENT),            // FN22 - momentary Layer6+CTRL+ALT on Enter, to use with F* keys on top row + utils
    [22] =  ACTION_LAYER_MOMENTARY(2),            // FN22 - momentary Layer6+CTRL+ALT on Enter, to use with F* keys on top row + utils

    [23] =  ACTION_LAYER_TAP_KEY(7, KC_BSLS),               // FN23 - momentary Layer7 on ' , to use with F* keys (F1-F24)

    [24] =  ACTION_LAYER_TAP_KEY(4, KC_Z),                  // FN24 = momentary Layer4 on Z key, to use with unconvenient keys
    [25] =  ACTION_LAYER_TAP_KEY(3, KC_X),                  // FN25 = momentary Layer3 on X key, to use with F* keys
    [26] =  ACTION_LAYER_TAP_KEY(8, KC_C),                  // FN26 = momentary Layer8 on C key, to use with mouse and navigation keys
    [27] =  ACTION_LAYER_TAP_KEY(9, KC_V),                  // FN27 = momentary Layer9 on V key, to use with application-specific shortcuts

    [28] =  ACTION_LAYER_TAP_KEY(4, KC_A),                  // FN28 = momentary Layer4 on A key, to use with unconvenient keys
    [29] =  ACTION_LAYER_TAP_KEY(3, KC_S),                  // FN29 = momentary Layer3 on S key, to use with F* keys
    [30] =  ACTION_LAYER_TAP_KEY(8, KC_D),                  // FN30 = momentary Layer8 on D key, to use with mouse and navigation keys
    [31] =  ACTION_LAYER_TAP_KEY(2, KC_F),                  // FN31 = momentary Layer2 on F key, to use with Numpad keys



};

static const uint16_t PROGMEM fn_actions_4[] = {
    [1]  =  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN1  = Shifted BackSlash // " in Workman
    [2]  =  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN2  = Shifted Minus     // \ in Workman
    [3]  =  ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN3  = Shifted comma     // < in Workman
    [4]  =  ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN4  = Shifted dot       // > in Workman
    [5]  =  ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),             // FN5  = Shifted slash     // ? in Workman
};

static const uint16_t PROGMEM fn_actions_7[] = {
    [0]  =  ACTION_MACRO(XMONAD_RESET),                     // FN0  = xmonad-reanimator
    [1]  =  ACTION_MACRO(PASSWORD1),                        // FN1  = default password
    [2]  =  ACTION_MACRO(PASSWORD1),                        // FN2  = other password
    [3]  =  ACTION_MACRO(PASSWORD1),                        // FN3  = mega password
};

static const uint16_t PROGMEM fn_actions_9[] = {
    [0]  =  ACTION_MODS_KEY(MOD_LCTL,          KC_P0),      // FN0  = Ctrl+0
    [1]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P1),      // FN1  = Alt+1
    [2]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P2),      // FN2  = Alt+2
    [3]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P3),      // FN3  = Alt+3
    [4]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P4),      // FN4  = Alt+4
    [5]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P5),      // FN5  = Alt+5
    [6]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P6),      // FN6  = Alt+6
    [7]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P7),      // FN7  = Alt+7
    [8]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P8),      // FN8  = Alt+8
    [9]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P9),      // FN9  = Alt+9
    [10] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_TAB),     // FN10 = Ctrl+Shift+Tab
    [11] =  ACTION_MODS_KEY(MOD_LCTL,          KC_TAB),     // FN11 = Ctrl+Tab
    [12] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_PGUP),    // FN12 = Ctrl+Shift+PgUp
    [13] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_PGDN),    // FN13 = Ctrl+Shift+PgDn
    [14] =  ACTION_MODS_KEY(MOD_LCTL,          KC_PMNS),    // FN14 = Ctrl+Pad Minus
    [15] =  ACTION_MODS_KEY(MOD_LCTL,          KC_PPLS),    // FN15 = Ctrl+Pad Plus
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // print("action_function called\n");
    // print("id  = "); phex(id); print("\n");
    // print("opt = "); phex(opt); print("\n");

    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(50);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }

    if (id == L_CTRL_ALT_ENT || id == R_CTRL_ALT_ENT) {
        if (record->tap.count == 0 || record->tap.interrupted) {
            uint8_t weak_mods;
            uint8_t layer;

            if (id == L_CTRL_ALT_ENT) {
                weak_mods = MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT);
                layer     = 5;
            } else {
                weak_mods = MOD_BIT(KC_RCTL) | MOD_BIT(KC_RALT);
                layer     = 6;
            }

            if (record->event.pressed) {
                layer_on(layer);
                add_weak_mods(weak_mods);
            } else {
                del_weak_mods(weak_mods);
                layer_off(layer);
            }
        } else {
            if (record->event.pressed) {
                add_key(KC_ENT);
                send_keyboard_report();
            } else {
                del_key(KC_ENT);
                send_keyboard_report();
            }
        }
    }


/*
 * just an example of custom key implementation
 * not really needed with custom keymap_fn_to_action(),
 * because it will allow you to have 32 FN** keys on EACH layer
 */

/*
    keyevent_t event = record->event;

    if (id == CUSTOM_KEY) {
        uint8_t layer = biton32(layer_state);
        uint8_t col = event.key.col;
        uint8_t row = event.key.row;
        uint8_t handled = 0;

        if (event.pressed) {
            if (layer == XXX && col == XXX && row == XXX) {
                    action_macro_play(
                        MACRO(
                            ...........
                        END)
                    );
                    handled++;
                }
            }
        }

        if (!handled) {
            print("custom key not handled");
            print(": layer "); pdec(layer);
            print(", col "); pdec(col);
            print(", row "); pdec(row);
            print("\n");
        }
    }
*/

}

#include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
            case XMONAD_RESET:  return MACRO_XMONAD_RESET;
            case PASSWORD1:     return MACRO_PASSWORD1;
        }
    }
    return MACRO_NONE;
}

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_4_SIZE   (sizeof(fn_actions_4) / sizeof(fn_actions_4[0]))
#define FN_ACTIONS_7_SIZE   (sizeof(fn_actions_7) / sizeof(fn_actions_7[0]))
#define FN_ACTIONS_9_SIZE   (sizeof(fn_actions_9) / sizeof(fn_actions_9[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    if (layer == 4 && FN_INDEX(keycode) < FN_ACTIONS_4_SIZE) {
        action.code = pgm_read_word(&fn_actions_4[FN_INDEX(keycode)]);
    }

    if (layer == 7 && FN_INDEX(keycode) < FN_ACTIONS_7_SIZE) {
        action.code = pgm_read_word(&fn_actions_7[FN_INDEX(keycode)]);
    }

    if (layer == 9 && FN_INDEX(keycode) < FN_ACTIONS_9_SIZE) {
        action.code = pgm_read_word(&fn_actions_9[FN_INDEX(keycode)]);
    }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
