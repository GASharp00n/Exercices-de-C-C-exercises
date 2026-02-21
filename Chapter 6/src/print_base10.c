/*
 * E89 Pedagogical & Technical Lab
 * project: print_base10
 * created on:  2026-02-04 - 11:14 +0100
 * 1st author:  sacha.juillard
 * description: function that prints numbers in base10
 */

#include <unistd.h>

void tc_putchar(char c);

int print_base10(int nb)
{
    int count;

    count = 0;
    if (nb < 0) {
        tc_putchar('-');
        count += 1;
        nb = -nb;
    }
    if (nb >= 10) {
        count += print_base10(nb / 10);
    }
    tc_putchar(nb % 10 + '0');
    count += 1;
    return (count);
}
