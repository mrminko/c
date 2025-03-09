#include <stdio.h>

int power(int base, int x);

main() {
    int i;
    for (i = 0; i <= 5; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
}

int power(int base, int x) {
    int i, p;
    p = 1;
    for (i = 1; i <= x; i++) {
        p = base * p;
    }
    return p;
}