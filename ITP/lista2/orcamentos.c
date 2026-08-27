#include <stdio.h>

int main(void) {

    int quant, quant_total = 0;
    double total = 0; 
    double preço;

    while(1) {

        scanf("%d", &quant);
        
        if (quant == -1) {
            break;
        }

        scanf("%lf", &preço);

        total += (quant * preço);
        quant_total += quant;
    }

    printf("%d %.2f", quant_total, total);

    return 0;
}