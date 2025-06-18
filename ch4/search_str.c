#include<stdio.h>
#include<string.h>
int search_str(char s[], char t[]);
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