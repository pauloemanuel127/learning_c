#include <stdio.h>

double potencia(double x, int n) {
    if(n == 0) return 1;
    return x * potencia(x, n - 1);
}

int main() {
    double x;
    int y;
    scanf("%lf %d", &x, &y);
    printf("%.3g\n", potencia(x, y));


    return 0;
}
