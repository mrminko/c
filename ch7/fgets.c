#include<stdio.h>
char *myfgets(char *s, int n, FILE *iop);

int main(int argc, char *argv[]) {
    char *s;
    FILE *fp = fopen(argv[1], "r");
    s = myfgets(s, 100, fp);
    printf("got: %s", s);
}

char *myfgets(char *s, int n, FILE *iop)
{
    register int c;
    register char *cs;
    cs = s;
    while (--n > 0 && (c = getc(iop)) != EOF)
        if ((*cs++ = c) == '\n')
            break;
    *cs = '\0';
    return (c == EOF && cs == s) ? NULL : s;
}