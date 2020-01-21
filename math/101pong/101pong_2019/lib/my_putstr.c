/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays one by one the characters of a string
*/

void my_putchar(char c);

/*Note: might be simpler with a for loop*/
int my_putstr(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        my_putchar(str[counter]);
        counter = counter + 1;
    }
    return (0);
}
