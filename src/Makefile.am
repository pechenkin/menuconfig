bin_PROGRAMS	= mconf
mconf_SOURCES	= mconf.c zconf.tab.c lxdialog/checklist.c lxdialog/inputbox.c lxdialog/menubox.c lxdialog/textbox.c lxdialog/util.c lxdialog/yesno.c

zconf.tab.c : zconf.y zconf.lex.c
	$(YACC) -o$@ -t -l $<

zconf.lex.c : zconf.l
	$(LEX) -o$@ -L $<
