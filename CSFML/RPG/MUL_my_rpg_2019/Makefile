##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC			=	gcc

NAME		=	my_rpg

RM			=	rm -rf

SRC			=	src/main.c 								\
				src/main_menu/main_menu.c 				\
				src/main_menu/click_on_main_menu.c 		\
				src/main_menu/option_main_menu.c 		\
				src/scale.c								\
				src/inv/check/skill_level.c 			\
				src/inv/draw/skill_inventory.c 			\
				src/inv/create/defense_skill.c 			\
				src/inv/create/attack_skill.c 			\
				src/inv/create/speed_skill.c 			\
				src/inv/create/main_create.c 			\
				src/inv/create/texture.c				\
				src/inv/position/position_skill.c 		\
				src/inv/position/other_scene_skill.c 	\
				src/inv/position/set_scene.c 			\
				src/inv/inventory.c 					\
				src/fight/set_fight.c					\
				src/fight/boss.c						\
				src/fight/animations.c					\
				src/fight/fight_window.c				\
				src/fight/handle_life.c					\
				src/fight/front_castle_fight.c 			\
				src/fight/fight_settings.c				\
				src/character/animation.c 				\
				src/character/handle_sprites.c 			\
				src/character/sprite_mvt.c				\
				src/cam/cam.c							\
				src/cam/fight_cam.c 					\
				src/cam/village_cam.c 					\
				src/pause/pause.c 						\
				src/help/help.c							\
				src/collision/collision.c 				\
				src/collision/start.c 					\
				src/collision/village_collision.c 		\
				src/collision/front_castle.c 			\
				src/collision/first_floor.c 			\
				src/collision/boss.c 					\
				src/music/music.c 						\
				src/music/fight_music.c 				\
				src/music/item_get.c 					\
				src/destroy/destroy.c 					\
				src/lib/my_putstr.c 					\
				src/init/init.c 						\
				src/move_zone/move_main.c 				\
				src/village.c 							\
				src/game_loop_start.c 					\
				src/first_floor.c 						\
				src/front_castle.c 						\
				src/boss_floor.c 						\
				src/quest.c \
				src/village_2.c
OBJ			=	$(SRC:.c=.o)

CFLAGS		+=	-Wall	-Wextra

CPPFLAGS	+=	-I ./include

CSFMLFLAGS  +=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
			echo -e "[i] \e[34mCreate lib\e[0m [i]"
			make -C lib/ -I ./lib
			echo -e "[i] \e[34mCompile objects\e[0m [i]"
			$(CC) $(OBJ) -o $(NAME) -L. lib/libmy.a $(CFLAGS) $(CSFMLFLAGS)
			echo -e "\n**************\e[92m COMPILATION DONE \e[0m**************"

debug:	CFLAGS += -g3 -ggdb
debug:  re

clean:
	make clean -C lib/
	$(RM) $(OBJ)
	echo -e "/!\ \e[31mCleaned object\e[0m /!\\"

fclean: clean
	$(RM) $(NAME)
	$(RM) lib/libmy.a
	echo -e "/!\ \e[31mCleaned binary\e[0m /!\\"

re:	fclean all

.PHONY:	all clean fclean re

.SILENT	:
