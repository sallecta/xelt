enum
{
	
    // glyph_attribute 
	XELT_ATTR_BOLD       = 1,
	XELT_ATTR_FAINT      = 1,
	XELT_ATTR_INVISIBLE  = 1,
	XELT_ATTR_ITALIC     = 1 ,
	XELT_ATTR_NULL       = 0,
	XELT_ATTR_REVERSE    = 1,
	XELT_ATTR_STRUCK     = 1,
	XELT_ATTR_UNDERLINE  = 1,
	XELT_ATTR_WDUMMY     = 1,
	XELT_ATTR_WIDE       = 1,
	XELT_ATTR_WRAP       = 1,
	XELT_ATTR_BOLD_FAINT = XELT_ATTR_BOLD | XELT_ATTR_FAINT,

    //   CURSOR_movement 
	XELT_CURSOR_SAVE,
	XELT_CURSOR_LOAD,

    //  CURSOR_state 
	XELT_CURSOR_DEFAULT  = 0,
	XELT_CURSOR_WRAPNEXT = 1,
	XELT_CURSOR_ORIGIN   = 2,

    //  term_mode 
	XELT_TERMINAL_8BIT        = 1 << 13,
	XELT_TERMINAL_ALTSCREEN   = 1 << 3,
	XELT_TERMINAL_APPCURSOR   = 1 << 11,
	XELT_TERMINAL_APPKEYPAD   = 1 << 2,
	XELT_TERMINAL_BRCKTPASTE  = 1 << 19,
	XELT_TERMINAL_CRLF        = 1 << 4,
	XELT_TERMINAL_ECHO        = 1 << 10,
	XELT_TERMINAL_FBLINK      = 1 << 15,
	XELT_TERMINAL_FOCUS       = 1 << 16,
	XELT_TERMINAL_HIDE        = 1 << 9,
	XELT_TERMINAL_INSERT      = 1 << 1,
	XELT_TERMINAL_KBDLOCK     = 1 << 8,
	XELT_TERMINAL_MOUSEBTN    = 1 << 5,
	XELT_TERMINAL_MOUSEMANY   = 1 << 18,
	XELT_TERMINAL_MOUSEMOTION = 1 << 6,
	XELT_TERMINAL_MOUSESGR    = 1 << 12,
	XELT_TERMINAL_MOUSEX10    = 1 << 17,
	XELT_TERMINAL_PRINT       = 1 << 20,
	XELT_TERMINAL_REVERSE     = 1 << 7,
	XELT_TERMINAL_WRAP        = 1 << 0,
	XELT_TERMINAL_MOUSE       = XELT_TERMINAL_MOUSEBTN|XELT_TERMINAL_MOUSEMOTION|XELT_TERMINAL_MOUSEX10|XELT_TERMINAL_MOUSEMANY,

    //   charset 
	XELT_CHARSET_FIN,
	XELT_CHARSET_GER,
	XELT_CHARSET_GRAPHIC0,
	XELT_CHARSET_GRAPHIC1,
	XELT_CHARSET_MULTI,
	XELT_CHARSET_UK,
	XELT_CHARSET_USA,

    //   escape_state 
	XELT_ESC_ALTCHARSET = 8,
	XELT_ESC_CSI        = 2,
	XELT_ESC_START      = 1,
	XELT_ESC_STR        = 4,  /* DCS, OSC, PM, APC */
	XELT_ESC_STR_END    = 16, /* a final string was encountered */
	XELT_ESC_TEST       = 32, /* Enter in test mode */

    //  window_state 
	XELT_WIN_FOCUSED = 2,
	XELT_WIN_VISIBLE = 1,

    //  selection_mode 
	XELT_SEL_EMPTY = 1,
	XELT_SEL_IDLE = 0,
	XELT_SEL_READY = 2,

    //  selection_type 
	XELT_SEL_RECTANGULAR = 2,
	XELT_SEL_REGULAR = 1,

    //  selection_snap 
	XELT_SELSNAP_LINE = 2,
	XELT_SELSNAP_WORD = 1,
	
	// XEMBED messages
	XELT_XEMBED_FOCUS_IN  = 4,
	XELT_XEMBED_FOCUS_OUT = 5,
	
	// Arbitrary sizes
	XELT_SIZE_UTF_INVALID = 0xFFFD,
	XELT_SIZE_UTF =  4,
	XELT_SIZE_ESC_BUF = (128*XELT_SIZE_UTF),
	XELT_ESC_ARG_SIZ = 16,
	XELT_SIZE_STR_BUF = XELT_SIZE_ESC_BUF,
	XELT_SIZE_STR_ARG = XELT_ESC_ARG_SIZ,
	XELT_SIZE_XK_ANY_MOD =  UINT_MAX,
	XELT_SIZE_XK_NO_MOD =  0,
	XELT_SIZE_XK_SWITCH_MOD = 1<<13,
	XELT_SIZE_OPAQUE = 0Xff,	
	
	// Font Ring Cache */
	XELT_FONTCACHE_NORMAL,
	XELT_FONTCACHE_ITALIC,
	XELT_FONTCACHE_BOLD,
	XELT_FONTCACHE_ITALICBOLD,	
	
	/* Mouse buttons */
	XELT_MOUSSE_LEFT = Button1,
	XELT_MOUSSE_MIDDLE = Button2,
	XELT_MOUSSE_RIGHT = Button3,
	
	/* Control Codes */
	XELT_CTRLCODE_APPLICATIONPROGRAMCOMMAND  = 0x9f, // APC
	XELT_CTRLCODE_BACKSPACE = '\b',
	XELT_CTRLCODE_BELL = '\a',
	XELT_CTRLCODE_CANCEL = '\030',
	XELT_CTRLCODE_CARRIAGERETURN = '\r',
	XELT_CTRLCODE_DELETE = '\177',
	XELT_CTRLCODE_DEVICECONTROLSTRING = 0x90, // DCS
	XELT_CTRLCODE_ESC = '\033',
	XELT_CTRLCODE_FORMFEED = '\f',
	XELT_CTRLCODE_HORIZONTALTABSTOP = 0x88,
	XELT_CTRLCODE_LINEFEED = '\n',
	XELT_CTRLCODE_NEXTLINE = 0x85,
	XELT_CTRLCODE_OPERATINGSYSTEMCOMMAND = 0x9d, // OSC
	XELT_CTRLCODE_PRIVACYMESSAGE = 0x9e, // PM
	XELT_CTRLCODE_SHIFTIN = '\017',
	XELT_CTRLCODE_SHIFTOUT = '\016',
	XELT_CTRLCODE_SUBSTITUTECHAR = '\032',
	XELT_CTRLCODE_TAB = '\t',
	XELT_CTRLCODE_TERMINALID = 0x9a, // DECID
	XELT_CTRLCODE_VERTICALTAB = '\v',

};