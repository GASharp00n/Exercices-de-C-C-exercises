/*
 * E89 Pedagogical & Technical Lab
 * project: tc_putchar
 * created on:  2026-02-04 - 11:07 +0100
 * 1st author:  sacha.juillard
 * description: function using write to print characters
 */

#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}
