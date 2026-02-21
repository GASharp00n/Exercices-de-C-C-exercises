/*
 * E89 Pedagogical & Technical Lab
 * project: mini_calculator2.main.c
 * created on:  2026-02-11 - 18:53 +0100
 * 1st author:  sacha.juillard
 * description: main for the mini calculator 2
 */

#include "mini_calculator2.h"
#include "../libstu/include/stu.h"
#include <unistd.h>
void run_all_tests(void);
int main(int argc, char **argv)
{
    int a;
    int b;
    char *op;

    if (argc > 1 && stu_strcmp(argv[1], "test") == 0) {
        run_all_tests();
        return 0;
    }
    if (argc != 4) {
        write(1, "usage: ./mini_calculator operator operand_1 operand_2\n", 55);
        return 1;
    }
    op = argv[1];
    a = stu_atoi(argv[2]);
    b = stu_atoi(argv[3]);
    print_base10(mini_calculator2(op, a, b));
    write(1, "\n", 1);
    return 0;
}
