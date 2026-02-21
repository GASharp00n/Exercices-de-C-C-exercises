/*
 * E89 Pedagogical & Technical Lab
 * project:     is_even.main.c
 * created on:  2025-10-16 - 12:03 +0200
 * 1st author:  sacha.juillard
 * description: uses the is_even.c function to print if number is even or not
 */

#include <stdio.h>

int is_even(int);

int main(void)
{
    if (is_even(2) == 1) {
        puts("2 is even!");
    } else {
        puts("this should be impossible! 2 can't be odd");
    }
    if (is_even(16) == 1) {
        puts("16 is even!");
    } else {
        puts("this should be impossible! 16 can't be odd");
    }
    if (is_even(356) == 1) {
        puts("356 is even!");
    } else {
        puts("this should be impossible! 356 can't be odd");
    }
}
