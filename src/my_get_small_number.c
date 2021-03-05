/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** get the smallest number between 3 numbers
*/

int my_get_small_number(int left, int corner, int up)
{
    if ((left <= corner) && (left < up))
        return (left);
    if ((corner <= left) && (corner < up))
        return (corner);
    if ((up <= left) && (up <= corner))
        return (up);
    return (0);
}