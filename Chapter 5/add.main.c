/*
 * E89 Pedagogical & Technical Lab
 * project: add.main.c
 * created on:  2025-11-23 - 13:01 +0100
 * 1st author:  sacha.juillard
 * description: test main for print_add function
 */

#include <stdio.h>
#include "add.h"

static void print_add(struct add *to_print)
{
    printf("%d + %d == %d\n",
           to_print->x, to_print->y, to_print->result);
}
int main(void)
{
    struct add add_1;

    add_1.x = 12;
    add_1.y = 32;
    stu_add(&add_1);
    print_add(&add_1);
    return 0;
}
