/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** get the integer map based on the original map
*/

#include "bsq.h"

int *my_get_int_map(char *map, char *tmp, struct stat *info)
{
    int *one_and_zero_map = NULL;
    int o_z = 0;

    if ((one_and_zero_map = my_put_memory(tmp, info)) == NULL)
        return (NULL);

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '.') {
            one_and_zero_map[o_z] = 1;
            o_z += 1;
        }
        if (map[i] == 'o') {
            one_and_zero_map[o_z] = 0;
            o_z += 1;
        }
    }
    return (one_and_zero_map);
}