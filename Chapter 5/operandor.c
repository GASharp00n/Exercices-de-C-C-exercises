/*
 * E89 Pedagogical & Technical Lab
 * project: operandor.c
 * created on:  2025-11-19 - 10:20 +0100
 * 1st author:  sacha.juillard
 * description: uses structure to store integers and character,
 * main goal is to do  mathematic operations
 */

#include <stdlib.h>
#include "operandor.h"

struct operandor *operandor_create(int x, int y, char c)
{
    struct operandor *result;

    if (c != '+' && c != '-' && c != '/' && c != '*' && c != '%') {
        return (0);
    }
    result = malloc(sizeof(struct operandor));
    if (result == NULL) {
        return (0);
    }

    result->x = x;
    result->y = y;
    result->c = c;

    return (result);
}

int operandor_init(struct operandor *op, int x, int y, char c)
{

    if (c != '+' && c != '-' && c != '/' && c != '*' && c != '%') {
        return (0);
    }

    op->x = x;
    op->y = y;
    op->c = c;

    return (1);
}

int operandor_compute(struct operandor *op)
{
    int result;

    if (op->c == '+') {
        result = op->x + op->y;
    } else if (op->c == '-') {
        result = op->x - op->y;
    } else if (op->c == '/') {
        result = op->x / op->y;
    } else if (op->c == '*') {
        result = op->x * op->y;
    } else {
        result = op->x % op->y;
    }
    return (result);
}

