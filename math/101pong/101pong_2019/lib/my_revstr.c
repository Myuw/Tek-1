/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverses a string
*/

/*Note: could probably be way better written*/
int my_str_len(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0')
        counter = counter + 1;
    return (counter);
}

char *my_evil_str(char *str)
{
    int counter = 0;
    int str_length = my_str_len(str);
    char temp_char;

    while (counter < str_length / 2) {
        temp_char = str[counter];
        str[counter] = str[str_length - 1 - counter];
        str[str_length - 1 - counter] = temp_char;
        counter = counter + 1;
    }
    return (str);
}

char *my_revstr(char *str)
{
    return (my_evil_str(str));
}
