#include<stdio.h>
#include<string.h>
void reverse(char s[]);

int main(void) {
    char str[] = "Hello Bro";
    reverse(str);
    printf("%s\n", str);
    return 0;
}

void reverse(char s[]) {
    int i, j, c;
    for(i = 0, j = strlen(s) - 1; i < j; ++i, --j) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    } 
}