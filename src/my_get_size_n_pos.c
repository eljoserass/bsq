/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** get right corner an size of bigger square
*/

#include "bsq.h"

void my_get_size_n_pos(int *int_map, int *square, char *map)
{
    int x = 0;
    int y = 1;
    int max_y = my_count_y(map);
    int max_x = my_get_row_len(map);

    while (y < max_y) {
        while (x <= max_x) {
            if (int_map[(x) + y*(max_x)] > square[SIZE]) {
                square[X] = x;
                square[Y] = y;
                square[SIZE] = int_map[(x) + y*(max_x)];
                x++;
            } else {
                x++;
            }
        }
        x = 0;
        y++;
    }
}