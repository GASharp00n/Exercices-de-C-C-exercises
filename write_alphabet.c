/*
 * E89 Pedagogical & Technical Lab
 * project:     write_alphabet.c
 * created on:  2025-10-16 - 15:07 +0200
 * 1st author:  sacha.juillard
 * description: writes letters from A to Z
 */

#include <stdio.h>
#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

void print_alphabet(char letter)
{
    if (letter > 'Z') {
        return;
    }
    tc_putchar(letter);
    print_alphabet(letter + 1);
}

int main(void)
{
    print_alphabet('A');
    tc_putchar('\n');
}
