/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** count how many \n
*/

int my_count_y(char *matrix)
{
    int y = 0;
    int i = 0;

    while (matrix[i] != '\0') {
        if (matrix[i] == '\n') {
            y++;
            i++;
        } else
            i++;
    }
    return (y);
}