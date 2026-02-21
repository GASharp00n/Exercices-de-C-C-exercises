/*
 * E89 Pedagogical & Technical Lab
 * project: enum_op.c
 * created on:  2025-11-23 - 12:50 +0100
 * 1st author:  sacha.juillard
 * description: function that uses enum_op header and executes an operation on
 * two integers
 */

#include "enum_op.h"

int enum_op(enum e_operation op, int a, int b)
{
    int result;

    result = 0;
    if (op == OP_ADD) {
        result = a + b;
    } else if (op == OP_SUB) {
        result = a - b;
    } else if (op == OP_MUL) {
        result = a * b;
    } else if (op == OP_DIV) {
        result = a / b;
    } else if (op == OP_MOD) {
        result = a % b;
    }
    return result;
}

