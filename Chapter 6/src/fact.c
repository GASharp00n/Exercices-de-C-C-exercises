/*
 * E89 Pedagogical & Technical Lab
 * project: fact.c
 * created on:  2026-02-03 - 09:23 +0100
 * 1st author:  sacha.juillard
 * description: multiplies res by number, if the number is 13 or above
 * itll stop to avoid overflow
 */

int stu_fact(int nb) {
    int res;
    int i;

    if (nb >= 13 || nb <= 0) {
        return 0;
    }
    res = 1;
    i = 1;
    while (i <= nb) {
        res = res * i;
        i += 1;
    }
    return res;
}
