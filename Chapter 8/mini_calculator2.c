/*
 * E89 Pedagogical & Technical Lab
 * project:     mini_calculator2
 * created on:  2026-02-11
 * 1st author:  Sacha Juillard
 * description: mini calculator with symbols and verbs
 */

#include "mini_calculator2.h"
#include "../libstu/include/stu.h"

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
    char *name;
    int (*fptr)(int a, int b);
};
const struct op_table_row OP_TABLE[] = {
    {"+", add},
    {"add", add},
    {"-", sub},
    {"sub", sub},
    {"*", mul},
    {"mul", mul},
    {"/", divide},
    {"div", divide},
    {"%", mod},
    {"mod", mod},
    {"p", power},
    {"pow", power},
};
const unsigned int OP_TABLE_LEN =
    sizeof(OP_TABLE) / sizeof(struct op_table_row);

int mini_calculator2(char *op, int a, int b)
{
    unsigned int idx;

    idx = 0;
    while (idx < OP_TABLE_LEN) {
        if (stu_strcmp(OP_TABLE[idx].name, op) == 0) {
            return OP_TABLE[idx].fptr(a, b);
        }
        idx = idx + 1;
    }
    return 0;
}
