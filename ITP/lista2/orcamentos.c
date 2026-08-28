#include <stdio.h>

int main(void) {

    int quant, quant_total = 0;
    double total = 0; 
    double preço;

    while(1) { //Loop infinito

        scanf("%d", &quant);
        
        if (quant == -1) { //Verificador do caso para sair do loop
            break;
        }

        scanf("%lf", &preço);

        total += (quant * preço); //Calculo do valor total
        quant_total += quant;
    }

    printf("%d %.2f", quant_total, total);

    return 0;
}