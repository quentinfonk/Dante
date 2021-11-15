/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** display number of character in a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
