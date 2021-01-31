/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_print_binary
*/

#include "my_printf.h"

int my_print_binary(va_list str_print, char *str, int i)
{
    char *str2 = malloc(sizeof(char *));
    unsigned int nbr = va_arg(str_print, unsigned int);

    if (!str2)
        exit(EXIT_FAILURE);
    if (nbr == 0)
        my_putchar('0');
    for (int i = 0; nbr >= 1; ++i) {
        str2[i] = (nbr % 2) + 48;
        nbr /= 2;
    }
    my_putstr(my_revstr(str2));
    free(str2);
    return (i);
}