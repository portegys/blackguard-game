# Build libBlackguard.so:
# export NDK_PROJECT_PATH=<android directory>
# cd $NDK_PROJECT_PATH
# <sdk>/android-ndk-<ver>/ndk-build

APP_ABI := armeabi-v7a arm64-v8a x86 x86_64

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := Blackguard

# Rogue and ncurses.
LOCAL_SRC_FILES := Blackguard.cpp \
  ../../../../../../rogue/armor.c \
  ../../../../../../rogue/chase.c \
  ../../../../../../rogue/command.c \
  ../../../../../../rogue/daemon.c \
  ../../../../../../rogue/daemons.c \
  ../../../../../../rogue/disply.c \
  ../../../../../../rogue/encumb.c \
  ../../../../../../rogue/fight.c \
  ../../../../../../rogue/global.c \
  ../../../../../../rogue/init.c \
  ../../../../../../rogue/io.c \
  ../../../../../../rogue/list.c \
  ../../../../../../rogue/main.c \
  ../../../../../../rogue/misc.c \
  ../../../../../../rogue/monsters.c \
  ../../../../../../rogue/move.c \
  ../../../../../../rogue/new_leve.c \
  ../../../../../../rogue/options.c \
  ../../../../../../rogue/pack.c \
  ../../../../../../rogue/passages.c \
  ../../../../../../rogue/potions.c \
  ../../../../../../rogue/pstats.c \
  ../../../../../../rogue/rings.c \
  ../../../../../../rogue/rip.c \
  ../../../../../../rogue/rooms.c \
  ../../../../../../rogue/save.c \
  ../../../../../../rogue/scrolls.c \
  ../../../../../../rogue/state.c \
  ../../../../../../rogue/sticks.c \
  ../../../../../../rogue/things.c \
  ../../../../../../rogue/trader.c \
  ../../../../../../rogue/vers.c \
  ../../../../../../rogue/weapons.c \
  ../../../../../../rogue/wizard.c \
  ../../../../../../rogue/xcrypt.c \
  ../../../ncurses-5.7/ncurses/base/define_key.c \
  ../../../ncurses-5.7/ncurses/base/keybound.c \
  ../../../ncurses-5.7/ncurses/base/keyok.c \
  ../../../ncurses-5.7/ncurses/base/key_defined.c \
  ../../../ncurses-5.7/ncurses/base/legacy_coding.c \
  ../../../ncurses-5.7/ncurses/base/lib_addch.c \
  ../../../ncurses-5.7/ncurses/base/lib_addstr.c \
  ../../../ncurses-5.7/ncurses/base/lib_beep.c \
  ../../../ncurses-5.7/ncurses/base/lib_bkgd.c \
  ../../../ncurses-5.7/ncurses/base/lib_box.c \
  ../../../ncurses-5.7/ncurses/base/lib_chgat.c \
  ../../../ncurses-5.7/ncurses/base/lib_clear.c \
  ../../../ncurses-5.7/ncurses/base/lib_clearok.c \
  ../../../ncurses-5.7/ncurses/base/lib_clrbot.c \
  ../../../ncurses-5.7/ncurses/base/lib_clreol.c \
  ../../../ncurses-5.7/ncurses/base/lib_color.c \
  ../../../ncurses-5.7/ncurses/base/lib_colorset.c \
  ../../../ncurses-5.7/ncurses/base/lib_delch.c \
  ../../../ncurses-5.7/ncurses/base/lib_delwin.c \
  ../../../ncurses-5.7/ncurses/base/lib_dft_fgbg.c \
  ../../../ncurses-5.7/ncurses/base/lib_echo.c \
  ../../../ncurses-5.7/ncurses/base/lib_endwin.c \
  ../../../ncurses-5.7/ncurses/base/lib_erase.c \
  ../../../ncurses-5.7/ncurses/base/lib_flash.c \
  ../../../ncurses-5.7/ncurses/base/lib_freeall.c \
  ../../../ncurses-5.7/ncurses/base/lib_getch.c \
  ../../../ncurses-5.7/ncurses/base/lib_getstr.c \
  ../../../ncurses-5.7/ncurses/base/lib_hline.c \
  ../../../ncurses-5.7/ncurses/base/lib_immedok.c \
  ../../../ncurses-5.7/ncurses/base/lib_inchstr.c \
  ../../../ncurses-5.7/ncurses/base/lib_initscr.c \
  ../../../ncurses-5.7/ncurses/base/lib_insch.c \
  ../../../ncurses-5.7/ncurses/base/lib_insdel.c \
  ../../../ncurses-5.7/ncurses/base/lib_insnstr.c \
  ../../../ncurses-5.7/ncurses/base/lib_instr.c \
  ../../../ncurses-5.7/ncurses/base/lib_isendwin.c \
  ../../../ncurses-5.7/ncurses/base/lib_leaveok.c \
  ../../../ncurses-5.7/ncurses/base/lib_mouse.c \
  ../../../ncurses-5.7/ncurses/base/lib_move.c \
  ../../../ncurses-5.7/ncurses/base/lib_mvwin.c \
  ../../../ncurses-5.7/ncurses/base/lib_newterm.c \
  ../../../ncurses-5.7/ncurses/base/lib_newwin.c \
  ../../../ncurses-5.7/ncurses/base/lib_nl.c \
  ../../../ncurses-5.7/ncurses/base/lib_overlay.c \
  ../../../ncurses-5.7/ncurses/base/lib_pad.c \
  ../../../ncurses-5.7/ncurses/base/lib_printw.c \
  ../../../ncurses-5.7/ncurses/base/lib_redrawln.c \
  ../../../ncurses-5.7/ncurses/base/lib_refresh.c \
  ../../../ncurses-5.7/ncurses/base/lib_restart.c \
  ../../../ncurses-5.7/ncurses/base/lib_scanw.c \
  ../../../ncurses-5.7/ncurses/base/lib_screen.c \
  ../../../ncurses-5.7/ncurses/base/lib_scroll.c \
  ../../../ncurses-5.7/ncurses/base/lib_scrollok.c \
  ../../../ncurses-5.7/ncurses/base/lib_scrreg.c \
  ../../../ncurses-5.7/ncurses/base/lib_set_term.c \
  ../../../ncurses-5.7/ncurses/base/lib_slk.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkatrof.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkatron.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkatrset.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkatr_set.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkattr.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkclear.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkcolor.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkinit.c \
  ../../../ncurses-5.7/ncurses/base/lib_slklab.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkrefr.c \
  ../../../ncurses-5.7/ncurses/base/lib_slkset.c \
  ../../../ncurses-5.7/ncurses/base/lib_slktouch.c \
  ../../../ncurses-5.7/ncurses/base/lib_touch.c \
  ../../../ncurses-5.7/ncurses/base/lib_ungetch.c \
  ../../../ncurses-5.7/ncurses/base/lib_vline.c \
  ../../../ncurses-5.7/ncurses/base/lib_wattroff.c \
  ../../../ncurses-5.7/ncurses/base/lib_wattron.c \
  ../../../ncurses-5.7/ncurses/base/lib_winch.c \
  ../../../ncurses-5.7/ncurses/base/lib_window.c \
  ../../../ncurses-5.7/ncurses/base/memmove.c \
  ../../../ncurses-5.7/ncurses/base/nc_panel.c \
  ../../../ncurses-5.7/ncurses/base/resizeterm.c \
  ../../../ncurses-5.7/ncurses/base/safe_sprintf.c \
  ../../../ncurses-5.7/ncurses/base/tries.c \
  ../../../ncurses-5.7/ncurses/base/use_window.c \
  ../../../ncurses-5.7/ncurses/base/version.c \
  ../../../ncurses-5.7/ncurses/base/vsscanf.c \
  ../../../ncurses-5.7/ncurses/base/wresize.c \
  ../../../ncurses-5.7/ncurses/codes.c \
  ../../../ncurses-5.7/ncurses/comp_captab.c \
  ../../../ncurses-5.7/ncurses/expanded.c \
  ../../../ncurses-5.7/ncurses/fallback.c \
  ../../../ncurses-5.7/ncurses/lib_gen.c \
  ../../../ncurses-5.7/ncurses/lib_keyname.c \
  ../../../ncurses-5.7/ncurses/names.c \
  ../../../ncurses-5.7/ncurses/tinfo/access.c \
  ../../../ncurses-5.7/ncurses/tinfo/add_tries.c \
  ../../../ncurses-5.7/ncurses/tinfo/alloc_entry.c \
  ../../../ncurses-5.7/ncurses/tinfo/alloc_ttype.c \
  ../../../ncurses-5.7/ncurses/tinfo/captoinfo.c \
  ../../../ncurses-5.7/ncurses/tinfo/comp_error.c \
  ../../../ncurses-5.7/ncurses/tinfo/comp_expand.c \
  ../../../ncurses-5.7/ncurses/tinfo/comp_hash.c \
  ../../../ncurses-5.7/ncurses/tinfo/comp_parse.c \
  ../../../ncurses-5.7/ncurses/tinfo/comp_scan.c \
  ../../../ncurses-5.7/ncurses/tinfo/db_iterator.c \
  ../../../ncurses-5.7/ncurses/tinfo/doalloc.c \
  ../../../ncurses-5.7/ncurses/tinfo/entries.c \
  ../../../ncurses-5.7/ncurses/tinfo/free_ttype.c \
  ../../../ncurses-5.7/ncurses/tinfo/getenv_num.c \
  ../../../ncurses-5.7/ncurses/tinfo/hashed_db.c \
  ../../../ncurses-5.7/ncurses/tinfo/home_terminfo.c \
  ../../../ncurses-5.7/ncurses/tinfo/init_keytry.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_acs.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_baudrate.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_cur_term.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_data.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_has_cap.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_kernel.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_longname.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_napms.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_options.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_print.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_raw.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_setup.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_termcap.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_termname.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_tgoto.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_ti.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_tparm.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_tputs.c \
  ../../../ncurses-5.7/ncurses/tinfo/lib_ttyflags.c \
  ../../../ncurses-5.7/ncurses/tinfo/name_match.c \
  ../../../ncurses-5.7/ncurses/tinfo/parse_entry.c \
  ../../../ncurses-5.7/ncurses/tinfo/read_entry.c \
  ../../../ncurses-5.7/ncurses/tinfo/read_termcap.c \
  ../../../ncurses-5.7/ncurses/tinfo/setbuf.c \
  ../../../ncurses-5.7/ncurses/tinfo/strings.c \
  ../../../ncurses-5.7/ncurses/tinfo/trim_sgr0.c \
  ../../../ncurses-5.7/ncurses/tinfo/use_screen.c \
  ../../../ncurses-5.7/ncurses/tinfo/write_entry.c \
  ../../../ncurses-5.7/ncurses/trace/lib_trace.c \
  ../../../ncurses-5.7/ncurses/trace/varargs.c \
  ../../../ncurses-5.7/ncurses/trace/visbuf.c \
  ../../../ncurses-5.7/ncurses/tty/hardscroll.c \
  ../../../ncurses-5.7/ncurses/tty/hashmap.c \
  ../../../ncurses-5.7/ncurses/tty/lib_mvcur.c \
  ../../../ncurses-5.7/ncurses/tty/lib_tstp.c \
  ../../../ncurses-5.7/ncurses/tty/lib_twait.c \
  ../../../ncurses-5.7/ncurses/tty/lib_vidattr.c \
  ../../../ncurses-5.7/ncurses/tty/tty_update.c \
  ../../../ncurses-5.7/ncurses/unctrl.c

LOCAL_CFLAGS := -DBLACKGUARD -DANDROID

LOCAL_C_INCLUDES := ncurses-5.7/include ncurses-5.7/ncurses

include $(BUILD_SHARED_LIBRARY)
