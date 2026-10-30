#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *vetor;
    int tam;
} Conjunto;

Conjunto uniao(Conjunto a, Conjunto b);

Conjunto intersecao(Conjunto a, Conjunto b);

int contem(int *vet, int tam, int valor);

int main() {
    Conjunto vetor_a, vetor_b;

    scanf("%d", &vetor_a.tam);
    vetor_a.vetor = malloc(vetor_a.tam * sizeof(int));
    for(int i = 0; i < vetor_a.tam; i++) {
        scanf("%d", vetor_a.vetor+i);
    }

    scanf("%d", &vetor_b.tam);
    vetor_b.vetor = malloc(vetor_b.tam * sizeof(int));
    for(int i = 0; i < vetor_b.tam; i++) {
        scanf("%d", vetor_b.vetor+i);
    }

    Conjunto vetor_U = uniao(vetor_a, vetor_b);
    Conjunto vetor_I = intersecao(vetor_a, vetor_b);

    free(vetor_a.vetor);
    free(vetor_b.vetor);

    int tam_U = vetor_U.tam;
    if(tam_U == 0) {
        printf("A união B == {vazio}\n");
    }
    else {
        printf("A união B == {");
        for(int i = 0; i < tam_U - 1; i++) {
            printf("%d ", *(vetor_U.vetor+i));
        }
        printf("%d}\n", *(vetor_U.vetor+tam_U-1));
    }

    int tam_I = vetor_I.tam;
    if(tam_I == 0) {
        printf("A interseção B == {vazio}\n");
    }
    else {
        printf("A interseção B == {");
        for(int i = 0; i < tam_I - 1; i++) {
            printf("%d ", *(vetor_I.vetor+i));
        }
        printf("%d}\n", *(vetor_I.vetor+tam_I-1));
    }

    free(vetor_U.vetor);
    free(vetor_I.vetor);

    return 0;
}

int contem(int *vet, int tam, int valor) {
    for(int i = 0; i < tam; i++) {
        if(*(vet+i) == valor) {
            return 1;
        }
    }
    return 0;
}

Conjunto uniao(Conjunto a, Conjunto b) {
    Conjunto vetor_U;

    int tam_max = a.tam + b.tam;

    vetor_U.vetor = malloc(tam_max * sizeof(int));
    int atual = 0;
    for(int i = 0; i < a.tam; i++) {
        if(!contem(vetor_U.vetor, atual, a.vetor[i])) {
            *(vetor_U.vetor+atual) = *(a.vetor+i);
            atual++;
        }
    }

    for(int i = 0; i < b.tam; i++) {
        if(!contem(vetor_U.vetor, atual, b.vetor[i])) {
            *(vetor_U.vetor+atual) = *(b.vetor+i);
            atual++;
        }
    }

    if(atual == 0) {
        free(vetor_U.vetor);
        vetor_U.vetor = NULL;
    }
    else {
        vetor_U.vetor = realloc(vetor_U.vetor, atual*sizeof(int));
    }
    vetor_U.tam = atual;

    return vetor_U;
}

Conjunto intersecao(Conjunto a, Conjunto b) {
    Conjunto vetor_I;

    vetor_I.vetor = malloc(b.tam * sizeof(int));
    int atual = 0;

    for(int i = 0; i < b.tam; i++) {
        if(contem(a.vetor, a.tam, b.vetor[i])) {
            if(!contem(vetor_I.vetor, atual, b.vetor[i])) {
                *(vetor_I.vetor+atual) = *(b.vetor+i);
                atual++;
            }
        }
    }

    if(atual == 0) {
        free(vetor_I.vetor);
        vetor_I.vetor = NULL;
    }
    else {
        vetor_I.vetor = realloc(vetor_I.vetor, atual*sizeof(int));
    }
    vetor_I.tam = atual;

    return vetor_I;
}
