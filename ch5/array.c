#include<stdio.h>

int main(void) {
	int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p, *a;
	p = &numbers[5];
	a = numbers;
	printf("number[5]: %d", *p);
	p++;
	printf("number[p+1]: %d\n", *p);
	printf("test: %d\n", (++*numbers));
	printf("array + 2: %d\n", *(numbers+2));
	printf("dereference a: %d\n", *(++a));
	return 0;
}
