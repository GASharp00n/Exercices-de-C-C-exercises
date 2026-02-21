/*
 * E89 Pedagogical & Technical Lab
 * project:     roll_2d6
 * created on:  2025-10-27 - 11:18 +0100
 * 1st author:  sacha.juillard
 * description: prints all possible combinations of two dice
 *              without duplicates using while loops
 */

#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int dice1;
    int dice2;

    dice1 = 1;
    while (dice1 <= 6) {
        dice2 = dice1;
        while (dice2 <= 6) {
            tc_putchar('0' + dice1);
            tc_putchar('-');
            tc_putchar('0' + dice2);
            if (dice1 == 6 && dice2 == 6) {
                tc_putchar('\n');
            } else {
                tc_putchar(' ');
            dice2 = dice2 + 1;
            }
        dice1 = dice1 + 1;
        }
    }
