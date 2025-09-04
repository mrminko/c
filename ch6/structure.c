#include<stdio.h>
#include <math.h>

int main(void) {
    struct point {
        int x;
        int y;
    };
    double dist;
    struct point pt = {320, 200};
    printf("%d, %d\n", pt.x, pt.y);

    dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
    printf("dist: %f\n", dist);

    struct name {
        char *firstname;
        char *lastname;
    } mgmg;
    mgmg.firstname = "mgmg";
    mgmg.lastname = "ko";
    printf("%s, %s\n", mgmg.firstname, mgmg.lastname);
    
}