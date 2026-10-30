#include <stdio.h>
#include <stdlib.h>

int* soma_vet(int *vet_a, int *vet_b, int tamanho_a, int tamanho_b);

int main() {

    int *vetor_a = NULL;
    int *vetor_b = NULL;
    int tam_a = 0, tam_b = 0;
    char c;

    while(1) {
        tam_a++;
        vetor_a = realloc(vetor_a, tam_a*sizeof(int));
        scanf("%d", vetor_a+tam_a-1);
        c = getchar();

        if(c == '\n' || c == EOF) {
            break;
        }
    }

    while(1) {
        tam_b++;
        vetor_b = realloc(vetor_b, tam_b*sizeof(int));
        scanf("%d", vetor_b+tam_b-1);
        c = getchar();

        if(c == '\n' || c == EOF) {
            break;
        }
    }


    int *vetor_c = soma_vet(vetor_a, vetor_b, tam_a, tam_b);

    free(vetor_a);
    free(vetor_b);

    if(vetor_c == NULL) return 0;

    for(int j = 0; j < tam_a; j++) {
        printf("%d ", *(vetor_c+j));
    }
    printf("\n");

    free(vetor_c);

    return 0;
}

int* soma_vet(int *vet_a, int *vet_b, int tamanho_a, int tamanho_b) {
    int *vetor_c = NULL;

    if(tamanho_a != tamanho_b) {
        printf("Vetores de tamanhos diferentes!\n");
        return vetor_c;
    }

    vetor_c = calloc(tamanho_a, sizeof(int)); //int 4 membytes

    for(int i = 0; i < tamanho_a; i++) {
        *(vetor_c+i) = *(vet_a+i) + *(vet_b+i);
    }

    return vetor_c;
}
