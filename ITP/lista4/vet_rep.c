#include <stdio.h>

void print_arr(int tam, int arr[]); //função que exibe

int main(void) {
    int n = 0;
    scanf("%d", &n);

    int vet[n] = {};
    for (int i = 0; i < n; i++) { //iterador do array
        scanf("%d", vet+i);
    }

    print_arr(n, vet);

    return 0;
}

void print_arr(int tam, int arr[]) {
    int ex[tam]; //array auxiliar
    int cont_ex = 0; //contador
    int printado = 0; //flag de indicação

    for (int i = 0; i < tam; i++) { //leitor do array
        for (int j = 0; j < cont_ex; j++) {  //verificador anti repetições
            if (arr[i] == ex[j]) {
                printado = 1;
                break;
            }
        }
        if (!printado) { //condição para a exibição
            printf("%d ", arr[i]);
            ex[cont_ex] = arr[i];
            cont_ex++;

        }
        printado = 0;
    }
}
