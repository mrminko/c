#include<stdio.h>
#include<string.h>
#define MAXLINE 1000
int get_line(char line[], int max);

int main(int argc, char *argv[]) {
    char line[MAXLINE];
    int found = 0;
    if (argc != 2)
        printf("Usage: find {pattern}\n");
    else
        while(get_line(line, MAXLINE) > 0) {
            if(strstr(line, argv[1])) {
                printf("%s", line);
                found ++;
            }
        }
    return found;
}


int get_line(char *line, int max) {
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