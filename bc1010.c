#include <stdio.h>

int cod1, cod2, quant1, quant2;
double price1, price2, item1, item2, result;

int main () {

    scanf("%d %d %lf", &cod1, &quant1, &price1);
    scanf("%d %d %lf", &cod2, &quant2, &price2);

    item1 = quant1 * price1;
    item2 = quant2 * price2;

    result = item1 + item2;

    printf("VALOR A PAGAR: R$ %.2f\n", result);

    return 0;
}

