/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** put an x where it's the bigger square
*/

#include "bsq.h"

void my_change_char(char *map, int *square)
{
    int x = 0;
    int y = 0;
    int size = 0;
    int i = 0;
    int max_x = my_get_row_len(map) + 1;

    x = square[X];
    y = square[Y];
    i = square[SIZE];
    while (i > 0) {
        size = square[SIZE];
        while (size > 0) {
            map[x + y * (max_x)] = 'x';
            x--;
            size--;
        }
        x = square[X];
        y--;
        i--;
    }
}

void my_put_x_in_map(char *map, int *int_map)
{
    int square[3] = {0, 0, 0};

    my_get_size_n_pos(int_map, square, map);
    my_change_char(map, square);
}