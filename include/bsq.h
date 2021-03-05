/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** .h for the main and the principal function
*/

#ifndef BSQ_H_
#define BSQ_H_

#define X 0
#define Y 1
#define SIZE 2

#include "ptr_manage.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include <stdio.h>

int bsq(char const *file);

int my_count_y(char *matrix);

int my_get_error(char *map, char *tmp);

int *my_put_memory(char *tmp, struct stat *info);

int *my_get_int_map(char *map, char *tmp, struct stat *info);

int my_get_small_number(int left, int corner, int up);

int *my_calculate_bigger_square(char *map, char *tmp, struct stat *info);

char *my_open_n_read_file(char const *file, struct stat *info);

void my_get_size_n_pos(int *int_map, int *square, char *map);

void my_put_x_in_map(char *map, int *int_map);

int my_print_bigger_square(char const *file);

#endif
