#include<stdio.h>
#include<string.h>
#define MAXLINE 1000;

int search_str(char s[], char t[]);
int strindex(char s[], char t[]);
int main(void) {
    return 0;
}

int search_str(char s[], char t[]) {
    int i, j, k, diff;
    diff = strlen(s) - strlen(t);
    for(i = 0; i <= diff; i++) {
        for(j=i, k=0; t[k] != '\0' && t[k] == s[j]; j++, k++)
            ;
        if(k > 0 && t[k] == '\0')
            return i;    
    }
    return -1;
}

int strindex(char s[], char t[]) {
    int i, j, k;
    for(i=0; s[i] != '\0'; i++) {
        for(j=i, k=0; t[k] != '\0'; j++, k++)
            ;
        if (t > 0 && t[k] == '\0') {
            return i;
        }    
    }
    return -1;
}