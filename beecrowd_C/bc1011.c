#include <stdio.h>

double R, vol;
double pi = 3.14159;

int main() {

    scanf("%lf", &R);

    vol = pi * (4.0/3) * (R*R*R);

    printf("VOLUME = %.3f\n", vol);

    return 0;
}