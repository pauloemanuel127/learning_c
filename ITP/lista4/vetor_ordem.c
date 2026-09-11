#include <stdio.h>

int verificador(int arr[], int tam); /** função verificadora, teoricamente retorna um booleano, como C não possui booleanos nativos e por não ter a necessidade de incluir a lib, usei 1 e 0 **/

int main(void) {
    int n = 0;
    scanf("%d", &n);

    int vet[n] = {};

    for (int i = 0; i < n; i++) { //iterador do vetor
        scanf("%d ", vet+i);
    }

    int resultado = verificador(vet, n);

    if (resultado == 1) { //verificador do resultado da função
        printf("Vetor esta ordenado");
    }
    else {
        printf("Vetor nao esta ordenado");
    }

    return 0;
}

int verificador(int arr[], int tam) {
    for (int i = 0; i < tam - 2; i++) { //iterador da verificação, uso tam - 2 pois não precisa ir até o ultimo espaço do array, apenas ao anterior dele
        if (arr[i] > arr[i+1]) {
            return 0;
        }
    }

    return 1;
}
