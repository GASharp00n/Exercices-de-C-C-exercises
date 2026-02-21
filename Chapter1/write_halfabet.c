/*
 * E89 Pedagogical & Technical Lab
 * project:     halfabet.c
 * created on:  2025-10-17 - 15:05 +0200
 * 1st author:  sacha.juillard
 * description: prints the alphabet skipping one letter out of two
 */

#include <stdio.h>
#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

void print_halfabet(char letter)
{
    if (letter > 'z') {
        return;
    }
    tc_putchar(letter);
    print_halfabet(letter + 2);
}

int main(void)
{
    print_halfabet('a');
    tc_putchar('\n');
}
