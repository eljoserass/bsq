/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** get the lenght of a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}