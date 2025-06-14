#include<stdio.h>

#define MAXLINE 1000
void copy(char to[], char from[]);
int get_line(char line[], int max);

int main(void) {
    char line[MAXLINE], maxline[MAXLINE];
    int max, current;
    max = 0;
    while((current = get_line(line, MAXLINE)) > 0) {
        if (current > max) {
            max = current;
            copy(maxline, line);
        }
    }
    if (max > 0) 
        printf("Max line: %s", maxline);
    return 0;
}

int get_line(char line[], int max) {
    int i, c;
    for (i = 0; i < max && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}