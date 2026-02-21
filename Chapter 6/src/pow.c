/*
 * E89 Pedagogical & Technical Lab
 * project: pow.c
 * created on:  2025-10-29 - 12:24 +0100
 * 1st author:  sacha.juillard
 * description: function that multiplies given number in main by power given
 */
int stu_pow(int nb, int power)
{
    int product;
    int counter;
    int abs_nb;

    if (power < 0) {
        return 0;
    }

    if (nb == 0) {
        if (power == 0) {
            return 1;
        }
        return 0;
    }

    if (nb < 0) {
        abs_nb = -nb;
    } else {
        abs_nb = nb;
    }

    product = 1;
    counter = 0;

    while (counter < power) {
        if (product > 65536 / abs_nb) {
            return 65536;
        }
        product = product * nb;
        counter = counter + 1;
    }

    return product;
}
