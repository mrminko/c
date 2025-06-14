#include <stdio.h>

#define IN 1   // inside a word
#define OUT 0  // outside a word

int main(void) {
    int lines = 0, words = 0, chars = 0;
    int state = OUT;
    int c;

    while ((c = getchar()) != EOF) {
        ++chars;

        if (c == '\n') {
            ++lines;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++words;
        }
    }

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
