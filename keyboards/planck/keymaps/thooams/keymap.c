#include "keymap.h"
#ifdef FRENCH
#include "sendstring_french.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[DEF] = LAYOUT(
    KF_X,     OSL(SPC),            KF_O,                KF_F,                KF_K,     _______,  _______,  KF_Q,     KF_D,                KF_L,                KF_C,                KF_W,
    KF_A,     MT(MOD_LALT, KF_I),  MT(MOD_LGUI, KF_E),  MT(MOD_LCTL, KF_U),  KF_COMM,  _______,  _______,  KF_G,     MT(MOD_RCTL, KF_T),  MT(MOD_RGUI, KF_N),  MT(MOD_RALT, KF_S),  KF_R,
    KF_Z,     KF_Y,                KF_MINS,             KF_H,                KF_DOT,   _______,  _______,  KF_B,     KF_P                 KF_M,                KF_V,                KF_J,
    _______,  _______,             _______,             MO(NAV),             KC_SPC,   _______,  _______,  KC_RSFT,  MO(SYM),             _______,             _______,             _______,
),

[SPC] = LAYOUT(
    KF_OE,      KF_DIAE,    KF_OCRC,    KF_EGRV,    KF_UGRV,    _______,    _______,    KF_LAQT,    KF_RAQT,    KF_MDOT,    KF_CCED,    KF_DEG,
    KF_ICRC,    KF_AE,      KF_ECRC,    KF_EACU,    KF_UCRC,    _______,    _______,    KF_EURO,    KF_AGRV,    KF_ACRC,    KF_UNDS,    CW_TOGG,
    KF_SUP2,    KF_BDOT,    KF_IQES,    KF_LARW,    KF_RARW,    _______,    _______,    KF_LDQT,    KF_RDQT,    KF_MICR,    KF_DIFF,    KF_CROS,
    _______,    _______,    _______,    _______,    KF_QUOT,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

[DEF2] = LAYOUT(                                                _______,    _______,
    KF_A,       KF_Z,       KF_E,       KF_R,       KF_T,       _______,    _______,    KF_Y,       KF_U,       KF_I,       KF_O,       KF_P,
    KF_Q,       KF_S,       KF_D,       KF_F,       KF_G,       _______,    _______,    KF_H,       KF_J,       KF_K,       KF_L,       KF_M,
    KF_W,       KF_X,       KF_C,       KF_V,       KF_B,       _______,    _______,    KF_N,       KF_COMM,    KF_DOT,     KF_MINS,    OSL(SPC2),
    _______,    _______,    _______,    MO(NAV),    KC_SPC,     _______,    _______,    KC_RSFT,    MO(SYM),    _______,    _______,    _______,
),

[SPC2] = LAYOUT(                                                _______,    _______,
    KF_AE,      KF_EACU,    KF_EGRV,    KF_SUP2,    KF_LDQT,    _______,    _______,    KF_RDQT,     KF_UGRV,    KF_DIFF,    KF_OE,      KF_DEG,
    KF_AGRV,    KF_ACRC,    KF_ECRC,    KF_EURO,    KF_LAQT,    _______,    _______,    KF_RAQT,     KF_UCRC,    KF_ICRC,    KF_OCRC,    KF_IQES,
    KF_PSMS,    KF_CROS,    KF_CCED,    KF_UNDS,    KF_LARW,    _______,    _______,    KF_RARW,     KF_MICR,    KF_MDOT,    KF_BDOT,    KF_DIAE,
    _______,    _______,    _______,    _______,    KF_QUOT,    _______,    _______,    _______,     _______,    _______,    _______,    _______,
),

[SYM] = LAYOUT(
    KF_PERC,    KF_PLUS,    KF_LBRC,    KF_RBRC,    KF_HASH,    _______,    _______,    KF_CIRC,    KF_COLN,    KF_DQUO,    KF_QUOT,    KF_DLR,
    KF_LCBR,    KF_LPRN,    KF_RPRN,    KF_RCBR,    KF_SLSH,    _______,    _______,    KF_EQL,     OS_RCTL,    OS_RSFT,    OS_RGUI,    OS_LALT,
    KF_TILD,    KF_BSLS,    KF_LABK,    KF_RABK,    KF_AMPR,    _______,    _______,    KF_PIPE,    KF_SCLN,    KF_ASTR,    KF_GRV,     KF_AT,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

[SYM_SFT] = LAYOUT(
    _______,    ZM_RS_2,    ZM_OU_2,    ZM_IN_2,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    ZM_RS_1,    ZM_OU_1,    ZM_IN_1,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

[NAV] = LAYOUT(
    SW_GRV,     SW_ESC,     SW_TAB,     KF_UNDO,    KF_REDO,    _______,    _______,    KC_HOME,    KC_BSPC,    KC_UP,      KC_DEL,     KC_END,
    OS_LALT,    OS_LGUI,    OS_LSFT,    OS_LCTL,    KC_ESC,     _______,    _______,    KC_TAB,     KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_ENT,
    KF_SLCT,    KF_CUT,     KF_COPY,    KF_PSTE,    KC_PSCR,    _______,    _______,    KC_HSCL,    KC_PGUP,    KC_PGDN,    KC_APP,     TO(MOS),
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

[NAV_ALT] = LAYOUT(
    _______,    KC_MPLY,    KC_VOLD,    KC_VOLU,    KC_MUTE,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    KC_MPRV,    KC_MNXT,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

[NAV_GUI] = LAYOUT(
    _______,    _______,    KF_WPRV,    KF_WNXT,    KC_WREF,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    KC_WBAK,    KC_WFWD,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

[NAV_CTL] = LAYOUT(
    _______,    KF_SAVE,    KF_CL_T,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    KC_DEL,     KF_CL_A,    KF_TCPY,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
     _______,    _______,    _______,   _______,    _______,    _______     _______,    _______,    _______,    _______,    _______,    _______,
),

[NUM] = LAYOUT(
    KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,    _______,    KC_F12,     KF_7,       KF_8,       KF_9,       KF_COMM,
    OS_LALT,    OS_LGUI,    OS_LSFT,    OS_LCTL,    KC_SPC,     _______,    _______,    KC_TAB,     KF_4,       KF_5,       KF_6,       KF_0,
    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      _______,    _______,    KC_F11,     KF_1,       KF_2,       KF_3,       KF_DOT,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

[MOS] = LAYOUT(                                                 _______,    _______,
    XXXXXXX,    OS_BTN2,    OS_BTN3,    OS_BTN1,    KC_BRIU,    _______,    _______,    DF(DEF2),   KC_WH_L,    KC_MS_U,    KC_WH_R,    XXXXXXX,
    XXXXXXX,    KC_BTN2,    KC_BTN3,    KC_BTN1,    KC_BRID,    _______,    _______,    DF(DEF),    KC_MS_L,    KC_MS_D,    KC_MS_R,    XXXXXXX,
    OS_LALT,    OS_LGUI,    OS_LSFT,    OS_LCTL,    QK_RBT,     _______,    _______,    QK_BOOT,    KC_WH_U,    KC_WH_D,    XXXXXXX,    XXXXXXX,
    _______,    _______,    _______,    _______,    KC_ACL0,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
),

};
