/*
 * E89 Pedagogical & Technical Lab
 * project:     has_opt_value
 * created on:  2026-02-03
 * description: find the value associated with an option
 */
char *has_opt_value(int argc, char **argv, char opt)
{
    int i;
    int j;

    i = 1;
    while (i < argc) {
        if (argv[i][0] == '-') {
            j = 1;
            while (argv[i][j] != '\0') {
                if (argv[i][j] == opt) {
                    if (argv[i][j + 1] == '\0' && i + 1 < argc)
                        return argv[i + 1];
                    return 0;
                }
                j += 1;
            }
        }
        i += 1;
    }
    return 0;
}

