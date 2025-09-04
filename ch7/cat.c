#include<stdio.h>
void filecopy(FILE *in, FILE *out);

int main(int argc, char *argv[]) {
    FILE *fp;
    if (argc == 1)
        filecopy(stdin, stdout);
    else {
        while(--argc > 0) {
            if((fp = fopen(*++argv, "r")) == NULL) {
                printf("cannot open the file: %s", *argv);
                return 1;
            } else {
                filecopy(fp, stdout);
                fclose(fp);
            }
        }
    }    
    return 0;
}

void filecopy(FILE *in, FILE *out) {
    int c;
    while((c = getc(in)) != EOF)
        putc(c, out);
}