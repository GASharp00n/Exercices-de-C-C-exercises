/*
 * E89 Pedagogical & Technical Lab
 * project: is_even.c
 * created on:  2025-10-16 - 12:00 +0200
 * 1st author:  sacha.juillard
 * description: function returning 1 if number is even 0 if odd
 */

#include <stdio.h>

int is_even(int number)
{
    int test;

    test = !(number % 2);
    return test;
}
