/*
 * E89 Pedagogical & Technical Lab
 * project:     stu_pow tester
 * created on:  2025-10-29 - 14:45 +0200
 * 1st author:  ChatGPT Assistant
 * description: main function testing stu_pow with overflow handling
 */

#include <stdio.h>

int stu_pow(int nb, int power);

int main(void)
{
    int res1;
    int res2;
    int res3;

    res1 = stu_pow(2, 16);
    if (res1 == 65536) {
        puts("ok");
    } else {
        puts("nok");
        return (0);
    }
    res2 = stu_pow(9, 452);
    if (res2 == 65536) {
        puts("ok");
    } else {
        puts("nok");
        return (0);
    }
    res3 = stu_pow(-65, 7);
    if (res3 == 65536) {
        puts("ok");
    } else {
        puts("nok");
        return (0);
    }
}

