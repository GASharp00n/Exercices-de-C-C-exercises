/*
 * E89 Pedagogical & Technical Lab
 * project: write_hello.c
 * created on:  2025-11-11 - 12:15 +0100
 * 1st author:  sacha.juillard
 * description: program that creates file and writes hello in it, uses function
 * strlen
 */

#include <unistd.h>
#include <fcntl.h>

unsigned int stu_strlen(const char *str);

int main(int argc, char **argv)
{
    int     fd;
    int     n;
    char    *message;

    if (argc != 2) {
        return (1);
    }
    fd = open(argv[1], O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        write(2, argv[0], stu_strlen(argv[0]));
        write(2, ": open error\n", 13);
        return (1);
    }
    message = "hello\n";
    n = write(fd, message, stu_strlen(message));
    if (n == -1) {
        write(2, argv[0], stu_strlen(argv[0]));
        write(2, ": write error\n", 14);
        close(fd);
        return (1);
    }
    close(fd);
    return (0);
}

