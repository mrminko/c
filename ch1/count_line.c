#include<stdio.h>

int main(void) {
    long nl;
    int c;
    for (nl = 0; (c = getchar()) != EOF;) {
        if (c == '\n') ++nl;
    };
    printf("%ld\n", nl);
    return 0;
}