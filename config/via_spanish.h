// #pragma once
#define KC_NO &none
#define KC_TRNS &trans

// layers
#define LAY_1 &mo 1
#define LAY_2 &mo 2
#define LAY_3 &mo 3


// CONTROL CMD/WINDOWS SHIFT ALT/META/OPTION
#define KC_LCTL &kp LCTRL // left control
#define KC_RCTL &kp RCTRL // right control
#define KC_WIN &kp LGUI   // WIN
#define KC_CMENU &kp K_CMENU   // WIN
#define KC_LALT &kp LALT
#define KC_ALGR &kp RALT
#define KC_LSFT &kp LSHFT
#define KC_RSFT &kp RSHFT

// ARROWS
#define KC_UP &kp UP
#define KC_LEFT &kp LEFT
#define KC_DOWN &kp DOWN
#define KC_RIGHT &kp RIGHT

// SPACE CAPS TAB ENTER BACKSPACE ESCAPE DELETE
#define KC_SPC &kp SPACE // Space
#define KC_CAPS &kp CAPS   // Caps Lock
#define KC_BSPC &kp BSPC   // Backspace
#define KC_ENT &kp RET     // Enter
#define KC_TAB &kp TAB     // Tab
#define KC_DEL &kp DEL     // Delete

// PAGE UP PAGE DOWN HOME END
#define KC_PGUP &kp PG_UP
#define KC_PGDN &kp PG_DN
#define KC_HOME &kp HOME
#define KC_END &kp END
#define KC_INS &kp END
#define KC_PRINT &kp PSCRN
#define KC_PAUSE &kp PAUSE_BREAK



// FUNCTION KEYS
#define KC_ESC &kp ESC
#define KC_F1 &kp F1
#define KC_F2 &kp F2
#define KC_F3 &kp F3
#define KC_F4 &kp F4
#define KC_F5 &kp F5
#define KC_F6 &kp F6
#define KC_F7 &kp F7
#define KC_F8 &kp F8
#define KC_F9 &kp F9
#define KC_F10 &kp F10
#define KC_F11 &kp F11
#define KC_F12 &kp F12

// SOUND / VOLUME
#define KC_VOL_UP &kp C_VOLUME_UP
#define KC_VOL_DN &kp C_VOLUME_DOWN
#define KC_MUTE &kp C_MUTE
#define KC_NEXT &kp C_NEXT
#define KC_PREV &kp C_PREVIOUS
#define KC_STOP &kp C_STOP
#define KC_PLAY &kp C_PLAY_PAUSE
#define KC_SHUFFLE &kp C_SHUFFLE

// DISPLAY BRIGHTNESS
#define KC_BRI_UP &kp C_BRI_UP
#define KC_BRI_DN &kp C_BRI_DN

// LANGUAGE
#define KC_LANG1 &kp LANG1
#define KC_LANG2 &kp LANG2
#define KC_LANG3 &kp LANG3
#define KC_LANG4 &kp LANG4
#define KC_LANG5 &kp LANG5
#define KC_LANG6 &kp LANG6
#define KC_LANG7 &kp LANG7
#define KC_LANG8 &kp LANG8
#define KC_LANG9 &kp LANG9

// Row 1
#define KC_CIRC &kp GRAVE // º
#define KC_1 &kp N1       // 1
#define KC_2 &kp N2       // 2
#define KC_3 &kp N3       // 3
#define KC_4 &kp N4       // 4
#define KC_5 &kp N5       // 5
#define KC_6 &kp N6       // 6
#define KC_7 &kp N7       // 7
#define KC_8 &kp N8       // 8
#define KC_9 &kp N9       // 9
#define KC_0 &kp N0       // 0
#define KC_APOS &kp MINUS   // '
#define KC_EXCL &kp EQUAL // ¡
// Row 2
#define KC_Q &kp Q       // Q
#define KC_W &kp W       // W
#define KC_E &kp E       // E
#define KC_R &kp R       // R
#define KC_T &kp T       // T
#define KC_Y &kp Y       // Y
#define KC_U &kp U       // U
#define KC_I &kp I       // I
#define KC_O &kp O       // O
#define KC_P &kp P       // P
#define KC_ACEN_R &kp LBKT // `
#define KC_PLUS &kp RBKT // +
// Row 3
#define KC_A &kp A            // A
#define KC_S &kp S            // S
#define KC_D &kp D            // D
#define KC_F &kp F            // F
#define KC_G &kp G            // G
#define KC_H &kp H            // H
#define KC_J &kp J            // J
#define KC_K &kp K            // K
#define KC_L &kp L            // L
#define KC_EGNE &kp SEMICOLON // Ñ
#define KC_ACEN &kp APOS      // ´
#define KC_CERI &kp HASH      // Ç
// Row 4
#define KC_LESS &kp LESS_THAN // <
#define KC_Z &kp Z        // Z
#define KC_X &kp X        // X
#define KC_C &kp C        // C
#define KC_V &kp V        // V
#define KC_B &kp B        // B
#define KC_N &kp N        // N
#define KC_M &kp M        // M
#define KC_COMM &kp COMMA // ,
#define KC_DOT &kp DOT    // .
#define KC_MINUS &kp KP_MINUS // -


// mt
#define WIN_CAPS &mt KC_WIN KC_CAPS 
#define CTRL_ENT &mt KC_LCTL KC_ENT

// SYS BT RGB
#define RESET &sys_reset
#define BT_CLEAR &bt BT_CLR
#define BT_NEXT &bt BT_NXT
#define RGB_TOGG &rgb_ug RGB_TOG
#define RGB_EFFO &rgb_ug RGB_EFF
#define RGB_EFRE &rgb_ug RGB_EFR
