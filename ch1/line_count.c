#include <stdio.h>

main() {
    long lc;
    int c;
    lc = 0; 
    while((c=getchar()) != EOF) {
        if (c == '\n') {
            ++lc;
        }
    }
    printf("Line count => %d", lc);
}