/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** takes a string and returns it's number of characters
*/

/*Note: might be better with a for loop*/
int my_strlen(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0')
        counter = counter + 1;
    return (counter);
}
