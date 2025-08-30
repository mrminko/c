#include<stdio.h>
char *month_name(int n);

int main(void) {
	char *m;
	for (int i=1; i <= 12; i++) {
		m = month_name(i);
		printf("%d: %s\n", i, m);
	}
	return 0;
}

char *month_name(int n) {
	static char *name[] = {
		"Illegal month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December"
	};
	printf("test: %c\n",name[0][1]);
	return (n < 1 || n > 12) ? name[0] : name[n];
}
