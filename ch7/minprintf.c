#include<stdio.h>
#include<stdarg.h>
void minprintf(char *fmt, ...);

int main(void) {
    char str[] = "hello bro";
    minprintf(str);
    return 0;
}

void minprintf(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    char *p, *strval;
    int ival;
    double dval;
    for(p = fmt; *p; p++) {
        if(*p != '%') {
            putchar(*p);
            continue;;
        }
        switch (*++p)
        {
        case 'd':
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;
        case 's':
            for(strval = va_arg(ap, char *); *strval; strval++)
                putchar(*strval);
            break;
        
        default:
            putchar(*p);
            break;
        }
    }
    putchar('\n');
    va_end(ap);
}