/*
 * E89 Pedagogical & Technical Lab
 * project: strdup_token.c
 * created on:  2026-02-14 - 19:51 +0100
 * 1st author:  sacha.juillard
 * description: strdup like function, stops when token is encountered
 */

#include <stdlib.h>
#include "strdup_token.h"
#include "strlen_token.h"

char *stu_strdup_token(const char *str, char token)
{
    unsigned int len;
    char *copy;
    unsigned int i;

    len = stu_strlen_token(str, token);
    copy = malloc(sizeof(char) * (len + 1));
    if (copy == (char *) 0) {
        return ((char *) 0);
    }
    i = 0;
    while (i < len) {
        copy[i] = str[i];
        i += 1;
    }
    copy[i] = '\0';
    return copy;
}
