/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_int
*/

#include "my_printf.h"

static int my_atoi(char *string)
{
    register int result = 0;
    register unsigned int digit;
    char sign = string[0];

    if (*string == '-')
        ++string;
    else
        if (*string == '+')
            ++string;
    for (; ; ++string) {
        digit = *string - '0';
        if (digit > 9)
            break;
        result = (10 * result) + digit;
    }
    if (sign == '-')
        return -(result);
    return (result);
}

int my_print_int(va_list str_print, char *str, int i)
{
    // int x = 0;
    // int nb = 0;
    // int p;
    // char *str2 = malloc(sizeof(char *));

    // p = 1 * my_compute_power_rec(10, my_strlen(str2) - 1);
    // str2 = my_strdup(my_revstr(str2));
    // for (int j = 0; j != my_strlen(str2); ++j) {
    //     nb += (str2[j] - 48) * p;
    //     p *= 10;
    // }
    // for (int z = 0; z != (nb - 2) && nb >= 2; z++)
    //     my_putchar(' ');
    my_put_nbr(va_arg(str_print, int));
    return (i);
}