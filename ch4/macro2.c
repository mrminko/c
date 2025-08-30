#include<stdio.h>
#define max(A,B) printf("max of " #A " " #B " is %d\n", (A) > (B) ? (A) : (B))

int main(void) {
    int x, y;
    x = 3;
    y = 4;
    max(x,y);
}
