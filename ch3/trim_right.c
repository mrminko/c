#include<stdio.h>
#include<string.h>
int trim_right(char s[]);
int main(void) {
    char str[] = "hello bro\0";
    printf("Length: %ld\n", strlen(str));
    return 0;
}

int trim_right(char s[]) {
    int n;
    for(n = strlen(s) - 1; n >= 0; n--) {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    }
    s[n+1] = '\0';
    return n;
}