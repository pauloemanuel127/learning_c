#include <stdio.h>

double A, B, C, areatri, areacirc, areatrap, areaquad, arearet;
double pi = 3.14159;

int main() {

    scanf("%lf %lf %lf", &A, &B, &C);

    areatri = (A * C)/2;
    areacirc = pi * (C*C);
    areatrap = ((A + B)* C)/2;
    areaquad = B*B;
    arearet = A*B;

    printf("TRIANGULO: %.3f\n"
        "CIRCULO: %.3f\n"
        "TRAPEZIO: %.3f\n"
        "QUADRADO: %.3f\n"
        "RETANGULO: %.3f\n", areatri, areacirc, areatrap, areaquad, arearet);

    return 0;
}