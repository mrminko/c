#include<stdio.h>
int binarysearch(int list[], int x, int length);
int main(void) {
    int list[] = {0,1,2,3,4,5,6,7,8,9};
    int to_search = 4;
    int result = binarysearch(list, to_search, 10);
    printf("Result: %d\n", result);
    return 0;
}

int binarysearch(int list[], int x, int length) {
    int low, mid, high;
    low = 0;
    high = length - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(list[mid] == x) {
            return mid;
        } else if (list[mid] < x){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}