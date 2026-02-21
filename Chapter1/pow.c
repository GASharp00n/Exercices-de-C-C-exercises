/*
 * E89 Pedagogical & Technical Lab
 * project: pow.c
 * created on:  2025-10-29 - 12:24 +0100
 * 1st author:  sacha.juillard
 * description: function that multiplies given number in main by power given
 */

#include <stdio.h>
#include <unistd.h>

int stu_pow(int nb, int power)
{
    int product;
    int counter;

    if (power < 0) {
        return 0;
    }
    product = 1;
    counter = 0;
    while (counter < power) {
        product = (product * nb);
        counter = counter + 1;
    }
    return product;
}
