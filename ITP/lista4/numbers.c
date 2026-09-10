#include <stdio.h>

#define tam 15 //definindo um tamanho padrão

void print_array(int vet[]); //declarando a função

int main(void) {

    int A[tam] = {}, B[tam] = {}, C[tam] = {}, D[tam] = {}; //inicialização dos vetores evitando lixo na memoria
    int contador_B = 0, contador_C = 0, contador_D = 0; //contadores para definir a posição e não acabar pulando algum local da memoria nos vetores menores

    for (int i = 0; i < tam; i++) { //iterador de scanf
        scanf("%d", A+i);
    }

    for (int i = 0; i < tam; i++) { //iterador de verificações
        if (A[i] % 2 != 0 && A[i] % 3 != 0) { //verifica logo o ultimo caso que exclui os outros dois
            D[contador_D] = A[i];
            contador_D += 1;
            continue;
        }
        if (A[i] % 2 == 0) { //caso B
            B[contador_B] = A[i];
            contador_B += 1;
        }
        if (A[i] % 3 == 0) { //caso C
            C[contador_C] = A[i];
            contador_C += 1;
        }
    }

    printf("B = ");
    print_array(B);
    printf("C = ");
    print_array(C);
    printf("D = ");
    print_array(D);

    return 0;
}

void print_array(int vet[]) { //cria a exibição do array de maneira mais limpa
    int tamanho = 0;
    putchar('[');
    while (vet[tamanho] != 0) { //calcula o tamanho do vetor
        tamanho +=1;
    }
    for (int i = 0; i < tamanho - 1; i++) {
        printf("%d, ", vet[i]);
    }
    printf("%d]\n", vet[tamanho - 1]);
}
