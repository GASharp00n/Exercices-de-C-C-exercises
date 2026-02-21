int stu_fact(int nb) {
    int res;
    int i;

    if (nb >= 13 || nb <= 0) {
        return 0;
    }
    res = 1;
    i = 1;
    while (i <= nb) {
        res = res * i;
        i += 1;
    }
    return res;
}
