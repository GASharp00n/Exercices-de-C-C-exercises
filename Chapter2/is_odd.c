/*
 * E89 Pedagogical & Technical Lab
 * project:     is_odd.c
 * created on:  2025-10-16 - 12:04 +0200
 * 1st author:  sacha.juillard
 * description: function returning 1 if number is odd, 0 if not
 */

#include <stdio.h>

int is_odd(int number)
{
    int test;

    test = number % 2;
    return test;
}
