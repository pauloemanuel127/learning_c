#include <stdio.h>

int main(void) {

    int n; 
    double media = 0;
    int anos = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) { //Itera por meio do valor de n

        double valor;

        scanf("%lf", &valor);

        if (valor < 0.0) { //Verifica se o valor é positivo, distancias não podem ser negativas

            continue;
        }

        else {

            media += valor;
            anos += 1;
        }
    }

    if (media == 0) { //Verifica se media recebeu os dados para cada ano

        printf("A competicao nao possui dados historicos!");
    }
    
    else {

    media = media/anos;
    printf("%.2f\n", media);
    }

    return 0;
}