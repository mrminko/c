#include<stdio.h>
int strlength(char *s);

int main(void) {
	char hello[] = "hello bro";
	int len = strlength(hello);
	printf("length: %d\n", len);
	return 0;
}


int strlength(char *s) {
	char *p = s;
	while(*p != '\0')
		p++;
	return p - s;
}
