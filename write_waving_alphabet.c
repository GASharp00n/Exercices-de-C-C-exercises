/*
 * E89 Pedagogical & Technical Lab
 * project:     waving_alphabet
 * created on:  2025-10-24 - 15:04 +0200
 * 1st author:  sacha.juillard
 * description: prints the alphabet alternating between lowercase
 *              and uppercase letters
 */

#include <stdio.h>
#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

char stu_capitalise(char letter)
{
    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 32;
    }
    return (letter);
}

void print_wavealphabet(char letter, int counter)
{
    if (letter > 'z') {
        return;
    }
    if (counter % 2 == 0) {
        tc_putchar(stu_capitalise(letter));
    } else {
        tc_putchar(letter);
    }
    print_wavealphabet(letter + 1, counter + 1);
}

int main(void)
{
    print_wavealphabet('a', 0);
    tc_putchar('\n');
}
