/*
 * E89 Pedagogical & Technical Lab
 * project: sublen.c
 * created on:  2026-02-15 - 14:50 +0100
 * 1st author:  sacha.juillard
 * description: function that returns number strings by detecting tokens
 */

#include <stdlib.h>
#include "sublen.h"
#include "count_token.h"
#include "strlen_token.h"

unsigned int *sublen(const char *str, char token)
{
    unsigned int *lengths;
    unsigned int token_count;
    unsigned int i;
    unsigned int index;

    token_count = count_token(str, token);
    lengths = malloc(sizeof(unsigned int) * (token_count + 1));
    if (!lengths) {
        return (0);
    }
    i = 0;
    index = 0;
    while (index < token_count + 1) {
        lengths[index] = stu_strlen_token(&str[i], token);
        i = i + lengths[index] + 1;
        index = index + 1;
    }
    return lengths;
}
