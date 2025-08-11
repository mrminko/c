#include<stdio.h>
#define print_hello() {printf("%s","hello\n");}
#define max(A, B) ((A) > (B) ? (A) : (B))

#define give_max(A, B) get_max((A), (B))
int get_max(int a, int b);

int get_max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    puts("hi");

    printf("%d\n", give_max(5, 3));
    // print_hello();
}