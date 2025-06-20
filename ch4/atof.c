#include<stdio.h>
#include<string.h>
#include<ctype.h>

double atof(char s[]);
int main(void) {
    
}

double atof(char s[]) {
    int i, sign;
    double value, power;
    for(i = 0; isspace(s[i]); i++)
        ;
    sign = s[i] == '-' ? -1 : 1;

    if(s[i] == '-' || s[i] == '+')
        i++;

    for(value = 0; isdigit(s[i]); i++)
        value = 10.0 * value + (s[i] - '0');
    
    if(s[i] == '.')
        i ++;
    
    for (power = 1.0; isdigit(s[i]); i++) {
        value = 10.0 * value + (s[i] - '0');
        power *= 10;
    }
    return sign * value / power;
}