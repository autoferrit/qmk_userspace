#include QMK_KEYBOARD_H

#include "spacerockmedia.h"

#define LAYOUT_wrapper(...)   LAYOUT(__VA_ARGS__)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_wrapper(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       __LPT__, _______________QWERTY__L_TOP_______________,    _______________QWERTY__R_TOP_______________, __RPT__,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       __LPM__, _______________QWERTY__L_MID_HRM___________,    _______________QWERTY__R_MID_HRM___________, __RPM__,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       __LPB__, _______________QWERTY__L_BOT_______________,    _______________QWERTY__R_BOT_______________, __RPB__,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  ____THREE_THUMB_LEFT_____,    _TWO_THUMB_RGHT_
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_COLEMAK] = LAYOUT_wrapper(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       __LPT__, _______________COLEMAK_L_TOP_______________,    _______________COLEMAK_R_TOP_______________, __RPT__,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       __LPM__, _______________COLEMAK_L_MID_HRM_____I_____,    _______________COLEMAK_R_MID_HRM___________, __RPM__,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       __LPB__, _______________COLEMAK_L_BOT_______________,    _______________COLEMAK_L_BOT_______________, __RPB__,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  ____THREE_THUMB_LEFT_____,    _TWO_THUMB_RGHT_
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_NAV] = LAYOUT_wrapper(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, __________________NAV__LT__________________,    _______, _______, _______, _______, _______, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, __________________NAV__LM__________________,    _______, _______________SCAG_______________, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, _______,    _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_NUM] = LAYOUT_wrapper(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, _______, _______, _______, _______, _______,    ________________NUM_PAD_TOP________________, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______________GACS_______________, _______,    ________________NUM_PAD_MIDm________________, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______,    ________________NUM_PAD_BOT________________, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, _______,    _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [_ADJUST] = LAYOUT_wrapper(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, __________________RGB_TOP__________________,    _______, _______, _______, _______, _______, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       QK_BOOT, __________________RGB_INC__________________,    _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, QK_BOOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       EE_CLR,  __________________RGB_DEC__________________,    _______, _______, _______, _______, _______, EE_CLR,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, _______,    _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),


  [_POINTER] = LAYOUT_wrapper(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, _______________POINTER_L_TOP_______________,    _______________POINTER_R_TOP_______________, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______________POINTER_L_MID_______________,    _______________POINTER_R_MID_______________, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______________POINTER_R_BOT_______________,    _______________POINTER_R_BOT_______________, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______MOUSE_LEFT________,    __MOUSE_RIGHT___
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on