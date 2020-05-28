/*
** EPITECH PROJECT, 2020
** my_check_line
** File description:
** navy
*/

int no_same_params(char *buffer)
{
    if (buffer[2] != buffer[5] && buffer[3] != buffer [6])
        return (-1);
    if (buffer[10] != buffer[13] && buffer[11] != buffer [14])
        return (-1);
    if (buffer[18] != buffer[21] && buffer[19] != buffer [22])
        return (-1);
    if (buffer[26] != buffer[29] && buffer[27] != buffer [30])
        return (-1);
    return (0);
}