/* generated by MKkeyname.awk */

#include <curses.priv.h>
#include <tic.h>
#include <term_entry.h>

struct kn { short offset; int code; };
static const struct kn _nc_key_names[] = {
	{ 0, KEY_A1 },
	{ 7, KEY_A3 },
	{ 14, KEY_B2 },
	{ 21, KEY_BACKSPACE },
	{ 35, KEY_BEG },
	{ 43, KEY_BREAK },
	{ 53, KEY_BTAB },
	{ 62, KEY_C1 },
	{ 69, KEY_C3 },
	{ 76, KEY_CANCEL },
	{ 87, KEY_CATAB },
	{ 97, KEY_CLEAR },
	{ 107, KEY_CLOSE },
	{ 117, KEY_COMMAND },
	{ 129, KEY_COPY },
	{ 138, KEY_CREATE },
	{ 149, KEY_CTAB },
	{ 158, KEY_DC },
	{ 165, KEY_DL },
	{ 172, KEY_DOWN },
	{ 181, KEY_EIC },
	{ 189, KEY_END },
	{ 197, KEY_ENTER },
	{ 207, KEY_EOL },
	{ 215, KEY_EOS },
	{ 223, KEY_EXIT },
	{ 232, KEY_F(0) },
	{ 241, KEY_F(1) },
	{ 250, KEY_F(10) },
	{ 260, KEY_F(11) },
	{ 270, KEY_F(12) },
	{ 280, KEY_F(13) },
	{ 290, KEY_F(14) },
	{ 300, KEY_F(15) },
	{ 310, KEY_F(16) },
	{ 320, KEY_F(17) },
	{ 330, KEY_F(18) },
	{ 340, KEY_F(19) },
	{ 350, KEY_F(2) },
	{ 359, KEY_F(20) },
	{ 369, KEY_F(21) },
	{ 379, KEY_F(22) },
	{ 389, KEY_F(23) },
	{ 399, KEY_F(24) },
	{ 409, KEY_F(25) },
	{ 419, KEY_F(26) },
	{ 429, KEY_F(27) },
	{ 439, KEY_F(28) },
	{ 449, KEY_F(29) },
	{ 459, KEY_F(3) },
	{ 468, KEY_F(30) },
	{ 478, KEY_F(31) },
	{ 488, KEY_F(32) },
	{ 498, KEY_F(33) },
	{ 508, KEY_F(34) },
	{ 518, KEY_F(35) },
	{ 528, KEY_F(36) },
	{ 538, KEY_F(37) },
	{ 548, KEY_F(38) },
	{ 558, KEY_F(39) },
	{ 568, KEY_F(4) },
	{ 577, KEY_F(40) },
	{ 587, KEY_F(41) },
	{ 597, KEY_F(42) },
	{ 607, KEY_F(43) },
	{ 617, KEY_F(44) },
	{ 627, KEY_F(45) },
	{ 637, KEY_F(46) },
	{ 647, KEY_F(47) },
	{ 657, KEY_F(48) },
	{ 667, KEY_F(49) },
	{ 677, KEY_F(5) },
	{ 686, KEY_F(50) },
	{ 696, KEY_F(51) },
	{ 706, KEY_F(52) },
	{ 716, KEY_F(53) },
	{ 726, KEY_F(54) },
	{ 736, KEY_F(55) },
	{ 746, KEY_F(56) },
	{ 756, KEY_F(57) },
	{ 766, KEY_F(58) },
	{ 776, KEY_F(59) },
	{ 786, KEY_F(6) },
	{ 795, KEY_F(60) },
	{ 805, KEY_F(61) },
	{ 815, KEY_F(62) },
	{ 825, KEY_F(63) },
	{ 835, KEY_F(7) },
	{ 844, KEY_F(8) },
	{ 853, KEY_F(9) },
	{ 862, KEY_FIND },
	{ 871, KEY_HELP },
	{ 880, KEY_HOME },
	{ 889, KEY_IC },
	{ 896, KEY_IL },
	{ 903, KEY_LEFT },
	{ 912, KEY_LL },
	{ 919, KEY_MARK },
	{ 928, KEY_MESSAGE },
	{ 940, KEY_MOUSE },
	{ 950, KEY_MOVE },
	{ 959, KEY_NEXT },
	{ 968, KEY_NPAGE },
	{ 978, KEY_OPEN },
	{ 987, KEY_OPTIONS },
	{ 999, KEY_PPAGE },
	{ 1009, KEY_PREVIOUS },
	{ 1022, KEY_PRINT },
	{ 1032, KEY_REDO },
	{ 1041, KEY_REFERENCE },
	{ 1055, KEY_REFRESH },
	{ 1067, KEY_REPLACE },
	{ 1079, KEY_RESET },
	{ 1089, KEY_RESIZE },
	{ 1100, KEY_RESTART },
	{ 1112, KEY_RESUME },
	{ 1123, KEY_RIGHT },
	{ 1133, KEY_SAVE },
	{ 1142, KEY_SBEG },
	{ 1151, KEY_SCANCEL },
	{ 1163, KEY_SCOMMAND },
	{ 1176, KEY_SCOPY },
	{ 1186, KEY_SCREATE },
	{ 1198, KEY_SDC },
	{ 1206, KEY_SDL },
	{ 1214, KEY_SELECT },
	{ 1225, KEY_SEND },
	{ 1234, KEY_SEOL },
	{ 1243, KEY_SEXIT },
	{ 1253, KEY_SF },
	{ 1260, KEY_SFIND },
	{ 1270, KEY_SHELP },
	{ 1280, KEY_SHOME },
	{ 1290, KEY_SIC },
	{ 1298, KEY_SLEFT },
	{ 1308, KEY_SMESSAGE },
	{ 1321, KEY_SMOVE },
	{ 1331, KEY_SNEXT },
	{ 1341, KEY_SOPTIONS },
	{ 1354, KEY_SPREVIOUS },
	{ 1368, KEY_SPRINT },
	{ 1379, KEY_SR },
	{ 1386, KEY_SREDO },
	{ 1396, KEY_SREPLACE },
	{ 1409, KEY_SRESET },
	{ 1420, KEY_SRIGHT },
	{ 1431, KEY_SRSUME },
	{ 1442, KEY_SSAVE },
	{ 1452, KEY_SSUSPEND },
	{ 1465, KEY_STAB },
	{ 1474, KEY_SUNDO },
	{ 1484, KEY_SUSPEND },
	{ 1496, KEY_UNDO },
	{ 1505, KEY_UP },
	{ -1, 0 }};

static const char key_names[] = 
	"KEY_A1\0"
	"KEY_A3\0"
	"KEY_B2\0"
	"KEY_BACKSPACE\0"
	"KEY_BEG\0"
	"KEY_BREAK\0"
	"KEY_BTAB\0"
	"KEY_C1\0"
	"KEY_C3\0"
	"KEY_CANCEL\0"
	"KEY_CATAB\0"
	"KEY_CLEAR\0"
	"KEY_CLOSE\0"
	"KEY_COMMAND\0"
	"KEY_COPY\0"
	"KEY_CREATE\0"
	"KEY_CTAB\0"
	"KEY_DC\0"
	"KEY_DL\0"
	"KEY_DOWN\0"
	"KEY_EIC\0"
	"KEY_END\0"
	"KEY_ENTER\0"
	"KEY_EOL\0"
	"KEY_EOS\0"
	"KEY_EXIT\0"
	"KEY_F(0)\0"
	"KEY_F(1)\0"
	"KEY_F(10)\0"
	"KEY_F(11)\0"
	"KEY_F(12)\0"
	"KEY_F(13)\0"
	"KEY_F(14)\0"
	"KEY_F(15)\0"
	"KEY_F(16)\0"
	"KEY_F(17)\0"
	"KEY_F(18)\0"
	"KEY_F(19)\0"
	"KEY_F(2)\0"
	"KEY_F(20)\0"
	"KEY_F(21)\0"
	"KEY_F(22)\0"
	"KEY_F(23)\0"
	"KEY_F(24)\0"
	"KEY_F(25)\0"
	"KEY_F(26)\0"
	"KEY_F(27)\0"
	"KEY_F(28)\0"
	"KEY_F(29)\0"
	"KEY_F(3)\0"
	"KEY_F(30)\0"
	"KEY_F(31)\0"
	"KEY_F(32)\0"
	"KEY_F(33)\0"
	"KEY_F(34)\0"
	"KEY_F(35)\0"
	"KEY_F(36)\0"
	"KEY_F(37)\0"
	"KEY_F(38)\0"
	"KEY_F(39)\0"
	"KEY_F(4)\0"
	"KEY_F(40)\0"
	"KEY_F(41)\0"
	"KEY_F(42)\0"
	"KEY_F(43)\0"
	"KEY_F(44)\0"
	"KEY_F(45)\0"
	"KEY_F(46)\0"
	"KEY_F(47)\0"
	"KEY_F(48)\0"
	"KEY_F(49)\0"
	"KEY_F(5)\0"
	"KEY_F(50)\0"
	"KEY_F(51)\0"
	"KEY_F(52)\0"
	"KEY_F(53)\0"
	"KEY_F(54)\0"
	"KEY_F(55)\0"
	"KEY_F(56)\0"
	"KEY_F(57)\0"
	"KEY_F(58)\0"
	"KEY_F(59)\0"
	"KEY_F(6)\0"
	"KEY_F(60)\0"
	"KEY_F(61)\0"
	"KEY_F(62)\0"
	"KEY_F(63)\0"
	"KEY_F(7)\0"
	"KEY_F(8)\0"
	"KEY_F(9)\0"
	"KEY_FIND\0"
	"KEY_HELP\0"
	"KEY_HOME\0"
	"KEY_IC\0"
	"KEY_IL\0"
	"KEY_LEFT\0"
	"KEY_LL\0"
	"KEY_MARK\0"
	"KEY_MESSAGE\0"
	"KEY_MOUSE\0"
	"KEY_MOVE\0"
	"KEY_NEXT\0"
	"KEY_NPAGE\0"
	"KEY_OPEN\0"
	"KEY_OPTIONS\0"
	"KEY_PPAGE\0"
	"KEY_PREVIOUS\0"
	"KEY_PRINT\0"
	"KEY_REDO\0"
	"KEY_REFERENCE\0"
	"KEY_REFRESH\0"
	"KEY_REPLACE\0"
	"KEY_RESET\0"
	"KEY_RESIZE\0"
	"KEY_RESTART\0"
	"KEY_RESUME\0"
	"KEY_RIGHT\0"
	"KEY_SAVE\0"
	"KEY_SBEG\0"
	"KEY_SCANCEL\0"
	"KEY_SCOMMAND\0"
	"KEY_SCOPY\0"
	"KEY_SCREATE\0"
	"KEY_SDC\0"
	"KEY_SDL\0"
	"KEY_SELECT\0"
	"KEY_SEND\0"
	"KEY_SEOL\0"
	"KEY_SEXIT\0"
	"KEY_SF\0"
	"KEY_SFIND\0"
	"KEY_SHELP\0"
	"KEY_SHOME\0"
	"KEY_SIC\0"
	"KEY_SLEFT\0"
	"KEY_SMESSAGE\0"
	"KEY_SMOVE\0"
	"KEY_SNEXT\0"
	"KEY_SOPTIONS\0"
	"KEY_SPREVIOUS\0"
	"KEY_SPRINT\0"
	"KEY_SR\0"
	"KEY_SREDO\0"
	"KEY_SREPLACE\0"
	"KEY_SRESET\0"
	"KEY_SRIGHT\0"
	"KEY_SRSUME\0"
	"KEY_SSAVE\0"
	"KEY_SSUSPEND\0"
	"KEY_STAB\0"
	"KEY_SUNDO\0"
	"KEY_SUSPEND\0"
	"KEY_UNDO\0"
	"KEY_UP\0";

#define SIZEOF_TABLE 256
#define MyTable _nc_globals.keyname_table

NCURSES_EXPORT(NCURSES_CONST char *) _nc_keyname (SCREEN *sp, int c)
{
	int i;
	char name[20];
	char *p;
	NCURSES_CONST char *result = 0;

	if (c == -1) {
		result = "-1";
	} else {
		for (i = 0; _nc_key_names[i].offset != -1; i++) {
			if (_nc_key_names[i].code == c) {
				result = (NCURSES_CONST char *)key_names + _nc_key_names[i].offset;
				break;
			}
		}

		if (result == 0 && (c >= 0 && c < SIZEOF_TABLE)) {
			if (MyTable == 0)
				MyTable = typeCalloc(char *, SIZEOF_TABLE);
			if (MyTable != 0) {
				if (MyTable[c] == 0) {
					int cc = c;
					p = name;
					if (cc >= 128 && (sp == 0 || sp->_use_meta)) {
						strcpy(p, "M-");
						p += 2;
						cc -= 128;
					}
					if (cc < 32)
						sprintf(p, "^%c", cc + '@');
					else if (cc == 127)
						strcpy(p, "^?");
					else
						sprintf(p, "%c", cc);
#ifdef METRO
					MyTable[c] = _strdup(name);
#else
					MyTable[c] = strdup(name);
#endif
				}
				result = MyTable[c];
			}
#if NCURSES_EXT_FUNCS && NCURSES_XNAMES
		} else if (result == 0 && cur_term != 0) {
			int j, k;
			char * bound;
			TERMTYPE *tp = &(cur_term->type);
			int save_trace = _nc_tracing;

			_nc_tracing = 0;	/* prevent recursion via keybound() */
			for (j = 0; (bound = keybound(c, j)) != 0; ++j) {
				for(k = STRCOUNT; k < (int) NUM_STRINGS(tp);  k++) {
					if (tp->Strings[k] != 0 && !strcmp(bound, tp->Strings[k])) {
						result = ExtStrname(tp, k, strnames);
						break;
					}
				}
				free(bound);
				if (result != 0)
					break;
			}
			_nc_tracing = save_trace;
#endif
		}
	}
	return result;
}

NCURSES_EXPORT(NCURSES_CONST char *) keyname (int c)
{
	return _nc_keyname(SP, c);
}

#if NO_LEAKS
void _nc_keyname_leaks(void)
{
	int j;
	if (MyTable != 0) {
		for (j = 0; j < SIZEOF_TABLE; ++j) {
			FreeIfNeeded(MyTable[j]);
		}
		FreeAndNull(MyTable);
	}
}
#endif /* NO_LEAKS */
