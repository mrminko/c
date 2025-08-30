#include<stdio.h>
void print(char **v, int len);

int main(void) {
    char *names[] = {"mgmg", "aungaung"};
    print(names, 2);
    return 0;
}

void print(char **v, int len) {
    int i=0, j=0;
    int c;
    while(--len > 0) {
        while(c = v[i][j]) {
            printf("%d: %d", j, c);
        }
        j=0;
    }
}