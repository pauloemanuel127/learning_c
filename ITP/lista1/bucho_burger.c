#include <stdio.h>

int main() {

    int item, valor, troco;

    scanf("%d %d", &item, &valor);

    switch (item) {

        case 1:

            troco =  valor - 12;
            break;
        
        case 2:

            troco = valor - 23;
            break;
        
        case 3:

            troco = valor - 31;
            break;
        
        case 4:

            troco = valor - 28;
            break;
        
        case 5:

            troco = valor - 15;
            break;
    
    }

    if (troco > 0) {

        printf("Troco = %d reais\n", troco);
    
    }

    else if (troco < 0) {

        troco = troco * -1;
        
        printf("Saldo insuficiente! Falta %d reais\n", troco);
    }
    
    else {

        printf("Deu certim!\n");
    }

}