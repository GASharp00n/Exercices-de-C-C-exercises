/*
 * E89 Pedagogical & Technical Lab
 * project: file_contains.c
 * created on:  2025-11-16 - 15:08 +0100
 * 1st author:  sacha.juillard
 * description: checks for a given string on a given file return match found
 * if string is found, not found if not
 */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

static int contains(const char *str1, const char *str2)
{
    int i;
    int j;
    int equal;
    int found;

    i = 0;
    found = 0;
    while (str1[i] != '\0' && !found) {
        j = 0;
        equal = 1;
        while (str2[j] != '\0' && equal) {
            if (str1[i + j] != str2[j]) {
                equal = 0;
            }
            j += 1;
        }
        if (equal && str2[0] != '\0') {
            found = 1;
        }
        i += 1;
    }
    return found;
}

int main(int argc, char **argv)
{
    int     fd;
    int     n;
    char    *buffer;
    int     match;
    char    *msg_matching;
    char    *msg_not_matching;

    if (argc != 3) {
        return 1;
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        return 1;
    }
    buffer = malloc(sizeof(char) * 100);
    if (buffer == NULL) {
        close(fd);
        return 1;
    }
    n = read(fd, buffer, 99);
    if (n < 0) {
        free(buffer);
        close(fd);
        return 1;
    }
    buffer[n] = '\0';
    match = contains(buffer, argv[2]);
    msg_matching = "match found\n";
    msg_not_matching = "not found\n";
    if (match) {
        write(1, msg_matching, 13);
    } else {
        write(1, msg_not_matching, 11);
    }
    free(buffer);
    close(fd);
    return 0;
}

