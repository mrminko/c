#include<stdio.h>
int strlength(char s[]);
int main(void){
	char hello[] = "hello bro";
	int len = strlength(hello);
	printf("length: %d", len);
	return 0;
}

int strlength(char s[]) {
	int n;
	for(n=0; *s != '\0'; s++, n++);
	return n;
}
