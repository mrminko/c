#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define frand() ((double)rand() / (RAND_MAX + 1.0))

int main(void) {
    int ival;
    double dval;
    ival = rand();
    printf("max: %d\n", RAND_MAX);
    printf("got: %d\n", ival);
    dval = frand();
    printf("got: %f\n", dval);
    return 0;
}