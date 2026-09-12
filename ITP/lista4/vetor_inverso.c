#include <stdio.h>

void print_arr(int vet[], int tam); //função de exibição de array formatado

int main(void) {
    int N[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", N+i);
    }

    int M[8];
    int cont = 0; //contador para o item do array principal

    for (int i = 7; i >= 0; i--) { //invertendo o array
        M[i] = N[cont];
        cont++;
    }

    print_arr(M, 8);

    return 0;
}

void print_arr(int vet[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        printf("%d,", vet[i]);
    }
    printf("%d", vet[tam - 1]);
}
