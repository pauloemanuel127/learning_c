#include <stdio.h>

int main(void) {

    double l1, l2, l3;

    scanf("%lf %lf %lf", &l1, &l2, &l3);

    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2) {

        double perimetro = l1 + l2 + l3;
        printf("Perimetro = %.1f\n", perimetro);
    }

    else {

        double area = ((l1 + l2) * l3)/2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}