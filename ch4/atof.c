#include<stdio.h>
#include<string.h>
#include<ctype.h>

double atof(char xs[]);
int main(void) {
    printf("%.3f\n", atof("-10.3244"));
}

// double atof(char s[]) {
//     int i, sign;
//     double value, power;
//     for(i = 0; isspace(s[i]); i++)
//         ;
//     sign = s[i] == '-' ? -1 : 1;

//     if(s[i] == '-' || s[i] == '+')
//         i++;

//     for(value = 0; isdigit(s[i]); i++)
//         value = 10.0 * value + (s[i] - '0');
    
//     if(s[i] == '.')
//         i ++;
    
//     for (power = 1.0; isdigit(s[i]); i++) {
//         value = 10.0 * value + (s[i] - '0');
//         power *= 10;
//     }
//     return sign * value / power;
// }

double atof(char s[]) {
    int i, sign, power;
    double val;
    for(i=0; isspace(s[i]); i++)
        ;
    if(s[i] == '-')
        sign = -1;
    else
        sign = 1;
    if(s[i] == '-' || s[i] == '+')
        i++;
    for(val=0.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
    }
    if(s[i] == '.')
        i++;
    for(power=1; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    return sign * val / power;
}