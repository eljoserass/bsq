/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** THE MAIN
*/

#include "bsq.h"

int main(int ac, char **av)
{
    if (ac > 2 || ac == 1) {
        my_putstr("Invalid number of arguments :(\n");
        return (84);
    }
    if ((bsq(av[1])) == 84)
        return (84);
    return (0);
}