bin_PROGRAMS	= mconf
mconf_SOURCES	= mconf.c zconf.tab.c lxdialog/checklist.c lxdialog/inputbox.c lxdialog/menubox.c lxdialog/textbox.c lxdialog/util.c lxdialog/yesno.c

%.tab.c : %.y %.lex.c
	$(YACC) -o$@ -t -l $<

%.lex.c : %.l
	$(LEX) -o$@ -L $<
