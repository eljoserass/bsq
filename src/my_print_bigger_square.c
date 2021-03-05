/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** principal function that find the biggest square
*/

#include "bsq.h"

int my_print_bigger_square(char const *file)
{
    struct stat info;
    char *map = my_open_n_read_file(file, &info);
    char *tmp = NULL;
    int *int_map;

    tmp = map;
    map += my_get_row_len(map) + 1;
    if (my_get_error(map, tmp) == 84)
        return (84);
    if (!(int_map = my_calculate_bigger_square(map, tmp, &info)))
        return (84);
    my_put_x_in_map(map, int_map);
    my_putstr(map);
    free(tmp);
    free(int_map);
    return (0);
}