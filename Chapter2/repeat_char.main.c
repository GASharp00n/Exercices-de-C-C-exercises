/*
 * E89 Pedagogical & Technical Lab
 * project:     repeat_char.main
 * created on:  2025-10-24 - 11:46 +0200
 * 1st author:  sacha.juillard
 * description: program that uses stu_repeat_char to print a given
 *              character a defined number of times
 */

#include <stdio.h>

void stu_repeat_char(char c, int n);

int main(void)
{
    char c;
    int n;

    c = 'j';
    n = 14;
    stu_repeat_char(c, n);
    putchar('\n');
}
