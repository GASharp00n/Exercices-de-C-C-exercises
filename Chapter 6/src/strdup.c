/*
 * E89 Pedagogical & Technical Lab
 * project:     strdup
 * created on:  2026-02-03
 * description: allocates and copies strings of characters
 */

#include <stdlib.h>

int stu_strlen(char *str);

char *stu_strdup(char *src)
{
    char *copy;
    int i;
    int length;

    if (!src) {
        return NULL;
    }
    length = stu_strlen(src);
    copy = malloc(sizeof(char) * (length + 1));
    if (!copy) {
        return NULL;
    }
    i = 0;
    while (src[i] != '\0') {
        copy[i] = src[i];
        i += 1;
    }
    copy[i] = '\0';
    return copy;
}
