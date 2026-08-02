#include <stdio.h>

double a;
double pi = 3.14159;
double r;

int main () {

    scanf("%lf", &r);
    a = pi * (r*r);
    
    printf("A=%.4f\n", a);

    return 0;
}