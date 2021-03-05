/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** ounts and returns the number of characters
*/

int my_get_row_len(char const *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    return (i);
}
