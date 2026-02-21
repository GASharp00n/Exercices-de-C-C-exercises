/*
 * E89 Pedagogical & Technical Lab
 * project: operandor main
 * created on:  2025-11-19 - 10:41 +0100
 * 1st author:  sacha.juillard
 * description: main used to test operandor function
 */
#include <stdlib.h>
#include <stdio.h>
#include "operandor.h"

int main(void)
{
    struct operandor op_1;
    int result;

    operandor_init(&op_1, 89, 112, '+');
    result = operandor_compute(&op_1);
    printf("Result = %d\n", result);
    return (0);
}
