int get_square(int number = 0) {
    return number * number;
}

int foo1() {
    int a = 0;
    int b = 100;
    do {
        do {
            a++;
        } while (get_square(5) < a);
        b--;
    } while (get_square(a) > b);
    return a;
}

int foo2() {
    int a = 0;
    do {
        a++;
    } while (get_square() != 0);
    return a;
}

int foo3() {
    int a = 0;
    bool flag = get_square(5) != 25;
    do {
        a++;
    } while (flag);
    return a;
}

int foo4(int a) {
    bool flag = get_square(a) != 0;
    do {
        a++;
    } while (flag && get_square(a) > 10);
    return a;
}
