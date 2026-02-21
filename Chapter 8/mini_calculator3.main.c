/*
 * E89 Pedagogical & Technical Lab
 * project: mini_calculator3.main.c
 * created on:  2026-02-11 - 19:38 +0100
 * 1st author:  sacha.juillard
 * description: main for the mini_calculator3
 */

#include "mini_calculator3.h"
#include "../libstu/include/stu.h"
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc > 1 && stu_strcmp(argv[1], "test") == 0) {
        run_all_tests();
        return 0;
    }
    if (argc < 4) {
        write(1, "usage: ./mini_calculator operator operand_1 [operand_2 ...]\n", 61);
        return 1;
    }
    unsigned int count = (unsigned int)(argc - 2);
    int *nums = (int *)malloc(sizeof(int) * count);
    if (!nums)
        return 1;
    unsigned int i = 0;
    while (i < count) {
        nums[i] = stu_atoi(argv[i + 2]);
        i += 1;
    }
    print_base10(mini_calculator(argv[1], nums, count));
    write(1, "\n", 1);
    free(nums);
    return 0;
}
