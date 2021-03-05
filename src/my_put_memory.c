/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** allocate memory for the integer map
*/

#include "bsq.h"

int *my_put_memory(char *tmp, struct stat *info)
{
    int size = my_getnbr(tmp);
    int size_nb = my_get_row_len(tmp) + 1;
    int *one_and_zero_map = malloc(sizeof(int) *
    ((info->st_size - size - size_nb) + 1));

    one_and_zero_map[(info->st_size - size - size_nb)] = -1;

    if (one_and_zero_map == NULL)
        return (NULL);

    return (one_and_zero_map);
}