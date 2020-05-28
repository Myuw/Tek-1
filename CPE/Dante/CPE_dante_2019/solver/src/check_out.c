/*
** EPITECH PROJECT, 2020
** check_out
** File description:
** dante
*/

int check_out(char **map)
{
    int x = 0;
    int y = 0;

    for (; map[x]; x++);
    for (; map[x - 1][y] != '\0'; y++);
    if (map[x - 1][y - 1] == 'o')
        return (-1);
    return (0);
}