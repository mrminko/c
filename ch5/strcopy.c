#include<stdio.h>
void my_strcopy(char *s, char *t);

int main(void) {
//	char s[3];
//	s = 'a';
	char a[] = "omg";
	char b[] = "bro";
	my_strcopy(a,b);
	printf("a: %s, b: %s\n", a, b);
	return 0;
}
void my_strcopy(char *s, char *t) {
	int i=0;
	while((s[i]=t[i]) != '\0')
		i++;	
}
