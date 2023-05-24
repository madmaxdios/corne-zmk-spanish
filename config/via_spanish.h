// #pragma once
#define ES_NO &none
#define ES_TRNS &trans

// layers
#define LAY_1 &mo 1
#define LAY_2 &mo 2
#define LAY_3 &mo 3

// CONTROL CMD/WINDOWS SHIFT ALT/META/OPTION
#define ES_LCTL &kp LCTRL // left control
#define ES_RCTL &kp RCTRL // right control
#define ES_WIN &kp LGUI   // WIN
#define ES_CMENU &kp K_CMENU   // WIN
#define ES_LALT &kp LALT
#define ES_ALGR &kp RALT
#define ES_LSFT &kp LSHFT
#define ES_RSFT &kp RSHFT

// ARROWS
#define ES_UP &kp UP
#define ES_LEFT &kp LEFT
#define ES_DOWN &kp DOWN
#define ES_RIGHT &kp RIGHT

// SPACE CAPS TAB ENTER BACKSPACE ESCAPE DELETE
#define ES_SPC &kp SPACE // Space
#define ES_CAPS &kp CAPS   // Caps Lock
#define ES_BSPC &kp BSPC   // Backspace
#define ES_ENT &kp RET     // Enter
#define ES_TAB &kp TAB     // Tab
#define ES_DEL &kp DEL     // Delete

// PAGE UP PAGE DOWN HOME END
#define ES_PGUP &kp PG_UP
#define ES_PGDN &kp PG_DN
#define ES_HOME &kp HOME
#define ES_END &kp END
#define ES_INS &kp END
#define ES_PRINT &kp PSCRN
#define ES_PAUSE &kp PAUSE_BREAK



// FUNCTION KEYS
#define ES_ESC &kp ESC
#define ES_F1 &kp F1
#define ES_F2 &kp F2
#define ES_F3 &kp F3
#define ES_F4 &kp F4
#define ES_F5 &kp F5
#define ES_F6 &kp F6
#define ES_F7 &kp F7
#define ES_F8 &kp F8
#define ES_F9 &kp F9
#define ES_F10 &kp F10
#define ES_F11 &kp F11
#define ES_F12 &kp F12

// SOUND / VOLUME
#define ES_VOL_UP &kp C_VOLUME_UP
#define ES_VOL_DN &kp C_VOLUME_DOWN
#define ES_MUTE &kp C_MUTE
#define ES_NEXT &kp C_NEXT
#define ES_PREV &kp C_PREVIOUS
#define ES_STOP &kp C_STOP
#define ES_PLAY &kp C_PLAY_PAUSE
#define ES_SHUFFLE &kp C_SHUFFLE

// DISPLAY BRIGHTNESS
#define ES_BRI_UP &kp C_BRI_UP
#define ES_BRI_DN &kp C_BRI_DN

// LANGUAGE
#define ES_LANG1 &kp LANG1
#define ES_LANG2 &kp LANG2
#define ES_LANG3 &kp LANG3
#define ES_LANG4 &kp LANG4
#define ES_LANG5 &kp LANG5
#define ES_LANG6 &kp LANG6
#define ES_LANG7 &kp LANG7
#define ES_LANG8 &kp LANG8
#define ES_LANG9 &kp LANG9

// Row 1
#define ES_CIRC &kp GRAVE // º
#define ES_1 &kp N1       // 1
#define ES_2 &kp N2       // 2
#define ES_3 &kp N3       // 3
#define ES_4 &kp N4       // 4
#define ES_5 &kp N5       // 5
#define ES_6 &kp N6       // 6
#define ES_7 &kp N7       // 7
#define ES_8 &kp N8       // 8
#define ES_9 &kp N9       // 9
#define ES_0 &kp N0       // 0
#define ES_APOS &kp MINUS   // ' -
#define ES_EXCL &kp EQUAL // ¡ =

// Row 2
#define ES_Q &kp Q       // Q
#define ES_W &kp W       // W
#define ES_E &kp E       // E
#define ES_R &kp R       // R
#define ES_T &kp T       // T
#define ES_Y &kp Y       // Y
#define ES_U &kp U       // U
#define ES_I &kp I       // I
#define ES_O &kp O       // O
#define ES_P &kp P       // P
#define ES_ACEN_R &kp LBKT // ` [
#define ES_PLUS &kp RBKT // + ]

// Row 3
#define ES_A &kp A            // A
#define ES_S &kp S            // S
#define ES_D &kp D            // D
#define ES_F &kp F            // F
#define ES_G &kp G            // G
#define ES_H &kp H            // H
#define ES_J &kp J            // J
#define ES_K &kp K            // K
#define ES_L &kp L            // L
#define ES_EGNE &kp SEMICOLON // Ñ ;
#define ES_ACEN &kp APOS      // ´ '
#define ES_CERI &kp HASH      // Ç bslh

// Row 4
#define ES_Z &kp Z        // Z
#define ES_X &kp X        // X
#define ES_C &kp C        // C
#define ES_V &kp V        // V
#define ES_B &kp B        // B
#define ES_N &kp N        // N
#define ES_M &kp M        // M
#define ES_COMM &kp COMMA // , ,
#define ES_DOT &kp DOT    // . .
#define ES_DASH &kp SLASH // - /

// symbols shift
#define ES_EXCL_R &kp LS(N1) // !
#define ES_DOUB_APO &kp LS(N2) // "
#define ES_DOT_MID &kp LS(N3) // ·
#define ES_DOLL &kp LS(N4) // $
#define ES_PERC &kp LS(N5) // %
#define ES_AMPER &kp LS(N6) // & 
#define ES_SLASH &kp LS(N7) // /
#define ES_PAREN &kp LS(N8) // (
#define ES_PAREN_R &kp LS(N9) // )
#define ES_EQUAL &kp LS(N0) // =
#define ES_QUEST_R &kp LS(MINUS) // ?
#define ES_QUEST &kp LS(EQUAL) // ¿

#define ES_ACEN_CIR &kp LS(LBKT) // ^
#define ES_STAR &kp LS(RBKT) // *

// symbol r alt
#define ES_BSLSH &kp RA(GRAVE) // BSLSH
#define ES_PIPE &kp RA(N1) // |
#define ES_AT &kp RA(N2) // @
#define ES_HASH &kp RA(N) // #
#define ES_NOT &kp RA(N6) // ¬

#define ES_CORCH &kp RA(LBKT) // [
#define ES_CORCH_R &kp RA(RBKT) // ]
#define ES_LLAVE &kp RA(APOS) // {
#define ES_LLAVE_R &kp RA(BACKSLASH) // }

#define ES_EURO &kp RA(E) // €
#define ES_LESS &kp NON_US_BSLH // <
#define ES_MORE &kp PIPE2 // >
#define ES_ACEN_GU &kp DOUBLE_QUOTES // ¨ 



// mt
#define WIN_CAPS &mt LWIN CAPS 
#define CTRL_ENT &mt LCTRL ENTER  

// SYS BT
#define RESET &sys_reset
#define BT_CLEAR &bt BT_CLR
#define BT_0 &bt BT_SEL 0
#define BT_1 &bt BT_SEL 1
#define BT_2 &bt BT_SEL 2
#define BT_3 &bt BT_SEL 3
#define BT_4 &bt BT_SEL 4

// rgb
#define RGB_TOGG &rgb_ug RGB_TOG
#define RGB_EFFO &rgb_ug RGB_EFF
#define RGB_EFRE &rgb_ug RGB_EFR
