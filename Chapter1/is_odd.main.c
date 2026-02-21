/*
 * E89 Pedagogical & Technical Lab
 * project:     is_odd.main.c
 * created on:  2025-10-16 - 12:11 +0200
 * 1st author:  sacha.juillard
 * description: uses function is_odd.c to print if number is odd or not
 */

#include <stdio.h>

int is_odd(int);

int main(void)
{
    if (is_odd(3) == 1) {
        puts("3 is indeed odd!");
    } else {
        puts("something isn't right. 3 can't be even!");
    }
    if (is_odd(59) == 1) {
        puts("59 is indeed odd!");
    } else {
        puts("something isn't right. 59 can't be even!");
    }
    if (is_odd(4573) == 1) {
        puts("4753 is indeed odd!");
    } else {
        puts("something isn't right. 4753 can't be even!");
    }
}
