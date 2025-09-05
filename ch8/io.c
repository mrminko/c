#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void) {
    char buf[BUFSIZ];
    int n;
    while((n = read(0, buf, BUFSIZ)) > 0) {
        printf("read: %d\n", n);
        write(1, buf, n);
    }
}