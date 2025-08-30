#include<stdio.h>
#include<ctype.h>
void swap(int *a, int *b);
int main(void) {
	int a = 10, b = 9;
	swap(&a, &b);
	printf("swapped, a %d, b %d\n", a, b);
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	printf("a %d, b %d\n", *a, *b);
	temp = *a;
	*a = *b;
	*b = temp;
}
