bonusobjects	=	bonus/my_alloc.o          \
			bonus/print_map.o         \
			bonus/fill_tab.o          \
			bonus/print_board.o       \
			bonus/game.o              \
			bonus/get_input.o         \
			bonus/check_input.o       \
			bonus/check_line.o        \
			bonus/get_max_matches.o   \
			bonus/manage_board.o      \
			bonus/ia_matchstick.o     \
			bonus/player_turn.o       \
			bonus/my_free.o           \
			bonus/main.o		  \

bonusoutput	=	matchstick_bonus	\

bonus:	$(bonusobjects)	lib	include/my.h	bonus/include_bonus/matchstick_bonus.h
	@echo -e "\e[0m[!] \e[92mCompiled object files\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	$(CC) $(CFLAGS) -o $(bonusoutput) $(bonusobjects) $(LIBFLAGS)
	@echo -e "\e[0m[i] \e[92mLinked object files\e[0m"
