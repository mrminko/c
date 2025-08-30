#include<stdio.h>

int main(void) {
	int *ip;
	int i = 10;
	ip = &i;
	//ip++;
	//int address = ip;
	//printf("address: %d", address);
	printf("value: %d", *ip);
	return 0;
}
