/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** get an error in the matrix
*/

#include "bsq.h"

int my_get_error(char *map, char *tmp)
{
    int first_line = my_getnbr(tmp);
    int first_line_len = my_get_row_len(map);
    int y =  my_count_y(map);

    if (first_line <= 0)
        return (84);
    if (first_line != y)
        return (84);
    if ((map[first_line_len + 1] != 'o') && ((map[first_line_len + 1]) != '.'))
        return (84);
    return (0);
}