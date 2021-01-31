/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_putstr
*/

#include "my_printf.h"

char *my_putstr(char *str)
{
    for (int i = 0; str[i]; ++i)
        my_putchar(str[i]);
    return (str);
}