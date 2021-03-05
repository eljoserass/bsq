/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** calculate bigger square in a integer map
*/

#include "bsq.h"

int *my_calculate_bigger_square(char *map, char *tmp, struct stat *info)
{
    int max_y = my_getnbr(tmp);
    int max_x = my_get_row_len(map);
    int x = 1;
    int y = 1;
    int *int_map = my_get_int_map(map, tmp, info);

    while (y < max_y) {
        while (x < max_x) {
            if (int_map[x + y*(max_x)] == 1) {
                int_map[x + y*(max_x)] =
                my_get_small_number(int_map[(x-1) + y*(max_x)],
                                    int_map[(x-1) +(y-1)*(max_x)],
                                    int_map[x + (y-1)*(max_x)]) + 1;
                x++;
            } else
                x++;
        }
        x = 1;
        y++;
    }
    return (int_map);
}