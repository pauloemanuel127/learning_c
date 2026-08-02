#include <stdio.h>

double a;
double b;
double c;

int main () {

    scanf("%lf", &a);
    scanf("%lf", &b);
    c = ((a * 3.5) + (b* 7.5)) / 11.0;

    printf("MEDIA = %.5f\n", c);
    return 0;
}
