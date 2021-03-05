/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** open and read a file and store it in a string
*/

#include "bsq.h"

char *my_open_n_read_file(char const *file, struct stat *info)
{
    int fd = open(file, O_RDONLY);
    char *map = NULL;

    stat(file, info);
    if (((map = malloc(info->st_size + 1)) == NULL) ||
    (read(fd, map, info->st_size) == -1))
        return (NULL);
    close(fd);
    map[info->st_size] = '\0';
    return (map);
}