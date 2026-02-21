/*
 * E89 Pedagogical & Technical Lab
 * project: has_opt
 * created on:  2025-11-08 - 18:41 +0100
 * 1st author:  sacha.juillard
 * description: function that searches if '-' and given letter are present in
 * the arg if not returns 0
 */

int has_opt(int argc, char **argv, char c)
{
    int i;
    int j;
    char *arg;

    i = 1;
    while (i < argc) {
        arg = argv[i];
        if (arg[0] == '-') {
            j = 1;
            while (arg[j] != '\0') {
                if (arg[j] == c) {
                    return (1);
                }
                j += 1;
            }
        }
        i += 1;
    }
    return (0);
}
