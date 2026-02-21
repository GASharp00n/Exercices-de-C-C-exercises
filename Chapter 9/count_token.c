/*
 * E89 Pedagogical & Technical Lab
 * project: count_token.c
 * created on:  2026-02-15 - 12:07 +0100
 * 1st author:  sacha.juillard
 * description: counts the amounts of tokens in a string of characters
 */

#include "count_token.h"
unsigned int count_token(const char *str, char token)
{
    unsigned int i;
    unsigned int count;

    i = 0;
    count = 0;
    while (str[i] != '\0') {
        if (str[i] == token) {
            count += 1;
        }
        i += 1;
    }
    return count;
}
