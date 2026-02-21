/*
 * E89 Pedagogical & Technical Lab
 * project:     strcat
 * created on:  2026-02-03
 * description: takes 2 strings and puts them together
 */
char *stu_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0') {
        i += 1;
    }
    j = 0;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j += 1;
    }
    dest[i + j] = '\0';
    return dest;
}
