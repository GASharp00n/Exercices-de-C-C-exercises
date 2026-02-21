/*
 * E89 Pedagogical & Technical Lab
 * project: puts.c
 * created on:  2025-11-05 - 12:33 +0100
 * 1st author:  sacha.juillard
 * description: function that replicates the function puts
 */

#include <unistd.h>

unsigned int stu_strlen(const char *str);

int stu_puts(const char *str)
{
    unsigned int len;
    ssize_t elements;
    ssize_t line_return;
    int total;

    len = stu_strlen(str);
    elements = write(1, str, len);
    if (elements == -1) {
        return -1;
    }
    line_return = write(1, "\n", 1);
    if (line_return == -1) {
        return -1;
    }
    total = elements + line_return;
    return total;
}
