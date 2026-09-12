#include <stdio.h>

void print_vet(int vet[], int tam); //função para exibir elementos do vetor da maneira como a questão deseja

int main(void) {
    int nums[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", nums+i);
    }

    int par[20];
    int cont_par = 0;
    int impar[20];
    int cont_impar = 0;

    for (int i = 0; i < 20; i++) { //iterador que separa o vetor principal nos vetores de pares e imparres
        if (nums[i] % 2 == 0) {
            par[cont_par] = nums[i];
            cont_par += 1;
            continue;
        }
        impar[cont_impar] = nums[i];
        cont_impar += 1;
    }

    printf("Pares: ");
    print_vet(par, cont_par);
    printf("Impares: ");
    print_vet(impar, cont_impar);

    return 0;
}

void print_vet(int vet[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        printf("%d,", vet[i]);
    }
    printf("%d\n", vet[tam - 1]);
}
