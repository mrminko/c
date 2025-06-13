#include<stdio.h>

int main(void) {
    double nc;
    int c;
    for (nc = 0; (c = getchar()) != EOF; ++nc)
        printf("typed: %d\n", c);
    printf("%.0f\n", nc);
    return 0;
}