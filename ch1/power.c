#include <stdio.h>

int power(int base, int x);
int power2(int base, int n);
int main(void) {
    int i;
    for (i = 0; i <= 5; i++) {
        printf("%d %d %d\n", i, power2(2, i), power2(-3, i));
    }
    return 0;
}

int power(int base, int x) {
    int i, p;
    p = 1;
    for (i = 1; i <= x; i++) {
        p = base * p;
    }
    return p;
}

int power2(int base, int n) {
    int p;
    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}