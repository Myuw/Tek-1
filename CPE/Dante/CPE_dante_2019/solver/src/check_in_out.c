/*
** EPITECH PROJECT, 2020
** check_in_out
** File description:
** dante
*/

int check_in_out(char **map)
{
    int x = 0;
    int y = 0;

    if (map[x][y] != '*')
        return (-1);
    if (map[x][y + 1] == 'X' && map[x + 1][y] == 'X')
        return (-1);
    for (; map[x]; x++);
    for (; map[x - 1][y] != '\0'; y++);
    if (map[x - 1][y - 1] != '*')
        return (-1);
    if (map[x - 2][y] == 'X' && map[x][y - 2] == 'X')
        return (-1);
    return (0);
}