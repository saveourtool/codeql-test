#include "ten"

int foo1() {
    int a = 100;
    int array1[] = {-6, 3, TEN};
    for (int i: array1) {
        a -= i;
    }
    return a;
}

int foo2() {
    int a = 0;
    int array2[] = {-9, 5, 15};
    for (int j: array2) {
        a += j;
    }
    return a;
}
