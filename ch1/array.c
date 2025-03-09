#include <stdio.h>

main() {
    int max;
    int c;
    int i;
    int digits[10];
    max = 10;
    for(i = 0; i < max; i++) {
        c = getchar();
        digits[i] = c;
    }
    printf("Final => ");
    for (i = 0; i < max; i++) {
        printf("%c", digits[i]);
    }
}