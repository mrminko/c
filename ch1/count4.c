#include<stdio.h>
/* count digits, white space, others */

int main(void) {
    int c, i, nwhite, nother;
    int digits[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; i++) {
        digits[i] = 0;
    }
    while((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') ++digits[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t') ++nwhite;
        else ++nother;
    }
    printf("Digits =");
    for (i = 0; i < 10; i++)
        printf(" %d", digits[i]);
    printf(" White = %d, Other = %d\n", nwhite, nother);
    return 0;   
}