#include<stdio.h>
#include "testheader.h"
void appendA(char* s);
int main(void) {
    double atof(char s[]);
    char result[100];
    appendA(result);
    appendA(result);
    appendA(result);

    printf("%s\n", result);
    printf("%f\n", atof("23.45"));
}

void appendA(char* s) {
    static int i = 0;
    s[i++] = 'A';
}