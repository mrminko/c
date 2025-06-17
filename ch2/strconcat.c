#include<stdio.h>
void strconcat(char s[], char t[]);
void strconcat2(char s[], char t[]);

int main(void) {
    char h[50] = "Hello ";
    char w[] = "World";
    strconcat2(h, w);
    printf("%s\n", h);
    return 0;
}

/* strcat: concatenate t to end of s; s must be big enough */
void strconcat(char s[], char t[]) {
    int i, j;
    for (i = 0; s[i] != '\0'; ++i)
        ;
    for (j = 0; t[j] != '\0'; ++j) {
        s[i++] = t[j];
    }
    s[i] = '\0';
}

void strconcat2(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while(s[i] != '\0')
       ++i;
    while((s[i++] = t[j++]) != '\0')
        ;    
}