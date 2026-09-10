#include <stdio.h>

int maior(int vet[], int tam);

int main(void) {
    int tam;
    scanf("%d", &tam);

    int vet[tam] = {};
    for (int i = 0; i < tam; i++) { //iteração do array
        scanf("%d", vet+i);
    }

    int result = maior(vet, tam); //chamado da função maior
    printf("O maior é: %d\n", result);

    return 0;
}

int maior(int vet[], int tam) {
    if (tam == 1) { //caso base para não precisar declarar novas variaveis
        return vet[0];
    }

    int maior = vet[0];
    for (int i = 1; i < tam; i++) { //iterador de comparação para achar o maior
        if (vet[i] >= maior) {
            maior = vet[i];
        }
    }

    return maior;
}
