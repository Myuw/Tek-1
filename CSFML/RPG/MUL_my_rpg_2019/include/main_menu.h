/*
** EPITECH PROJECT, 2020
** main_menu.h
** File description:
** main_menu.h
*/

#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#define USAGE "Welcome to our My_rpg\n\n\
You incarnate a mage and travel over the world to accumulate knowledge.\n\
When the night falls, you glimpse a village far away and decide to take \
a rest and spend the night in the village.\n\n\
Moves:\n\
\t- Up arrow: moving forward\n\
\t- Left arrow: moving left\n\
\t- Right arrow: moving right\n\
\t- Down arrow: moving back\n\n\
Keybinding:\n\
\t- Esc: pause menu (press to A quit quickly or press quit button)\n\
\t- I: open inventory\n\
\t- T: talk to Alice\n"

void click_on_play(sfRenderWindow *window);
void click_on_quit(sfRenderWindow *window);
void click_on_option(sfRenderWindow *window,
sfMouseButton ledt_click, sfMusic *music);
void initialise_game(sfRenderWindow *window);
void main_menu_option(sfRenderWindow *window,
sfMouseButton left_click, sfMusic *music);
void my_putstr(char const *str);

#endif /* MAIN_MENU_H */
