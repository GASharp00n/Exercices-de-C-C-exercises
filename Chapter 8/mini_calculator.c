/*
 * E89 Pedagogical & Technical Lab
 * project:     mini_calculator
 * created on:  2026-02-10
 * 1st author:  Sacha Juillard
 * description: mini calculator program using a decision table and pointers
 */
#include "mini_calculator.h"
#include "stu.h"

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int power(int a, int b)
{
    return stu_pow(a, b);
}

struct op_table_row {
    char symbol;
    int (*fptr)(int a, int b);
};

const struct op_table_row OP_TABLE[] = {
    {'+', add},
    {'-', sub},
    {'*', mul},
    {'/', divide},
    {'%', mod},
    {'p', power},
};

const unsigned int OP_TABLE_LEN = sizeof(OP_TABLE) / sizeof(struct op_table_row);
int mini_calculator(char op, int a, int b)
{
    unsigned int idx;

    idx = 0;
    while (idx < OP_TABLE_LEN) {
        if (OP_TABLE[idx].symbol == op) {
            return OP_TABLE[idx].fptr(a, b);
        }
        idx = idx + 1;
    }
    return 0;
}
