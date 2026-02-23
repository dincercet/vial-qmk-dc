#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
        //|-----------+--------+-------------------+-------------------+-------------------+-----+-------//--------+-----+-------------------+-------------------+-------------------+--------+--------|
            KC_ESC,    KC_Q,    KC_W,               KC_E,               KC_R,               KC_T, XXXXXXX, MO(3),   KC_Y, KC_U,               KC_I,               KC_O,               KC_P,    KC_BSPC,
        //|-----------+--------+-------------------+-------------------+-------------------+-----+-------//--------+-----+-------------------+-------------------+-------------------+--------+--------|
            KC_TAB,    KC_A,    MT(MOD_LGUI, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LALT, KC_F), KC_G, XXXXXXX, XXXXXXX, KC_H, MT(MOD_LALT, KC_J), MT(MOD_LCTL, KC_K), MT(MOD_LGUI, KC_L), KC_SCLN, KC_QUOT,
        //|-----------+--------+-------------------+-------------------+-------------------+-----+-------//--------+-----+-------------------+-------------------+-------------------+--------+--------|
            KC_LGUI,   KC_Z,    KC_X,               KC_C,               KC_V,               KC_B,          KC_N,    KC_M, KC_COMM,            KC_DOT,             KC_SLSH,            KC_RALT,
        //|-----------+--------+-------------------+-------------------+-------------------+-----+-------//--------+-----+-------------------+-------------------+-------------------+--------+--------|
                                                                                 KC_LCTL, KC_SPC,  MO(1),  KC_RSFT, LT(2,KC_ENT), MO(2)
                                                                            //`--------------------------//------------------------------'
    ),

    [1] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
            _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,    _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
            _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,    _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
            _______, KC_MINS, KC_UNDS, KC_EQL,  KC_PLUS, KC_BSLS,                      KC_PIPE, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______,
        //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                                _______, _______,  _______,     _______, _______, _______
                                            //`--------------------------'  `--------------------------'
    ),

    [2] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
             KC_TAB, KC_EXLM,   KC_AT, KC_HASH, KC_DLR,  KC_PERC, KC_LCTL,    KC_RCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
            KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
        //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
            KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                            //`--------------------------'  `--------------------------'
    ),

    [3] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
            QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
            RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
            RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                            //`--------------------------'  `--------------------------'
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =
    {
        ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
        ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
        ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
        ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
    },
    [1] =
    {
        ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
        ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
        ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
        ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
    },
    [2] =
    {
        ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
        ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
        ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
        ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
    },
    [3] =
    {
        ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
        ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
        ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
        ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
    },
};
#endif
