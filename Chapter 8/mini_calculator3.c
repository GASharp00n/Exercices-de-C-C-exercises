/*
 * E89 Pedagogical & Technical Lab
 * project:     mini_calculator3
 * created on:  2026-02-12
 * 1st author:  Sacha Juillard
 * description: mini calculator with symbols, verbs, sum/avg, decision table
 */
#include "mini_calculator3.h"
#include "../libstu/include/stu.h"
int add(int *nums, unsigned int count)
{
    int res = 0;
    if (count >= 2)
        res = nums[0] + nums[1];
    return res;
}
int sub(int *nums, unsigned int count)
{
    int res = 0;
    if (count >= 2)
        res = nums[0] - nums[1];
    return res;
}
int mul(int *nums, unsigned int count)
{
    int res = 0;
    if (count >= 2)
        res = nums[0] * nums[1];
    return res;
}
int divide(int *nums, unsigned int count)
{
    int res = 0;
    if (count >= 2 && nums[1] != 0)
        res = nums[0] / nums[1];
    return res;
}
int mod(int *nums, unsigned int count)
{
    int res = 0;
    if (count >= 2 && nums[1] != 0)
        res = nums[0] % nums[1];
    return res;
}
int power(int *nums, unsigned int count)
{
    int res = 0;
    if (count >= 2)
        res = stu_pow(nums[0], nums[1]);
    return res;
}

int sum(int *nums, unsigned int count)
{
    int res = 0;
    unsigned int i = 0;
    while (i < count) {
        res += nums[i];
        i += 1;
    }
    return res;
}
int avg(int *nums, unsigned int count)
{
    int res = 0;
    if (count > 0)
        res = sum(nums, count) / (int)count;
    return res;
}
struct op_table_row {
    char *name;
    int (*fptr)(int *nums, unsigned int count);
};
const struct op_table_row OP_TABLE[] = {
    {"+", add}, {"add", add},
    {"-", sub}, {"sub", sub},
    {"*", mul}, {"mul", mul},
    {"/", divide}, {"div", divide},
    {"%", mod}, {"mod", mod},
    {"p", power}, {"pow", power},
    {"s", sum}, {"sum", sum},
    {"a", avg}, {"avg", avg}
};
const unsigned int OP_TABLE_LEN =
    sizeof(OP_TABLE) / sizeof(struct op_table_row);
int mini_calculator(char *op, int *nums, unsigned int count)
{
    unsigned int idx;
    int res;

    idx = 0;
    while (idx < OP_TABLE_LEN)
    {
        if (stu_strcmp(OP_TABLE[idx].name, op) == 0)
        {
            res = OP_TABLE[idx].fptr(nums, count);
            return res;
        }
        idx += 1;
    }
    return 0;
}
