/*
** EPITECH PROJECT, 2020
** my_str_is_letter
** File description:
** lib_function
*/

int my_str_is_letter(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < 'a' || str[i] > 'z')
            && (str[i] < 'A' || str[i] > 'Z'))
            return (-1);
    return (0);
}
