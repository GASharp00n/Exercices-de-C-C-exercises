/*
 * E89 Pedagogical & Technical Lab
 * project: enum_op.main.c
 * created on:  2025-11-23 - 12:52 +0100
 * 1st author:  sacha.juillard
 * description: test main for the function enum_op
 */

#include <stdio.h>
#include "enum_op.h"

int main(void)
{
    int res;

    res = enum_op(OP_ADD, 113, 43);
    printf("%d\n", res);
    res = enum_op(OP_MUL, 4, 4);
    printf("%d\n", res);
    res = enum_op(OP_SUB, 113, 43);
    printf("%d\n", res);
    res = enum_op(OP_DIV, 100, 50);
    printf("%d\n", res);
    res = enum_op(OP_MOD, 113, 2);
    printf("%d\n", res);
    return 0;
}

