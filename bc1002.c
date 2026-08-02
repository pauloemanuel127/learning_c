#include <stdio.h>

double A;
double pi = 3.14159;
double R;

int main () {

    scanf("%lf", &R);
    
    A = pi * (R*R);
    
    printf("A=%.4f\n", A);

    return 0;
}