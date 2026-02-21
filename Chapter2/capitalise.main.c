/*
 * E89 Pedagogical & Technical Lab
 * project:     capitalise.main.c
 * created on:  2025-10-23 - 12:13 +0200
 * 1st author:  sacha.juillard
 * description: uses stu_capitalise to convert a lowercase
 *              letter to uppercase, or return it unchanged
 */

#include <stdio.h>

char stu_capitalise(char letter);

int main(void)
{
    char letter;

    letter = 'j';
    putchar(stu_capitalise(letter));
    putchar('\n');
    letter = 'b';
    putchar(stu_capitalise(letter));
    putchar('\n');
    letter = 'y';
    putchar(stu_capitalise(letter));
    putchar('\n');
}
