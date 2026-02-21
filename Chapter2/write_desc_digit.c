/*
 * E89 Pedagogical & Technical Lab
 * project: write_desc_digit.c
 * created on:  2025-10-16 - 14:14 +0200
 * 1st author:  sacha.juillard
 * description: writes numbers from 9 to 0
 */

#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    tc_putchar('9');
    tc_putchar('8');
    tc_putchar('7');
    tc_putchar('6');
    tc_putchar('5');
    tc_putchar('4');
    tc_putchar('3');
    tc_putchar('2');
    tc_putchar('1');
    tc_putchar('0');
    tc_putchar('\n');
}
