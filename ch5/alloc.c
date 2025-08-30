#include<stdio.h>
#define ALLOCSIZE 10000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

int main(void) {
	return 0;
}

char *alloc(int n) {
	if(allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n;
		return allocp - n;
	}
	return 0;
}

void afree(char *p) {
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}
