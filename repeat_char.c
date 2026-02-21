/*
 * E89 Pedagogical & Technical Lab
 * project:     repeat_char
 * created on:  2025-10-24 - 11:43 +0200
 * 1st author:  sacha.juillard
 * description: prints a character multiple times using a loop
 */

#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

void stu_repeat_char(char c, int n)
{
    int i;

    i = 0;
    while (i < n) {
        tc_putchar(c);
        i = i + 1;
    }
}
