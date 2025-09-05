#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int result;
    printf("say hello baby\n");
    result = system("./compiled/say_hello");
    printf("done: %d\n", result);
    return 0;
}