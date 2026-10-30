#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char **PARTICIPANTES = NULL;
    int N = 0;
    char *nome = NULL;

    nome = malloc(1000000 * sizeof(char));

    while(1) {
        fgets(nome, 1000000, stdin);
        nome[strlen(nome) - 1] = '\0';
        if(!strcmp(nome, "acabou")) {
            break;
        }
        PARTICIPANTES = realloc(PARTICIPANTES, (N + 1) * sizeof(char*));
        PARTICIPANTES[N] = malloc((strlen(nome) + 1) * sizeof(char));
        strcpy(PARTICIPANTES[N], nome);
        N++;
    }
    free(nome);

    int seed;
    scanf("%d", &seed);
    srand(seed);

    if(N > 0) {
        int *ja_sorteados = calloc(N, sizeof(int));
        int sorteados = 0;

        while(N > sorteados) {
            int indice_participante = rand() % N;

            if(ja_sorteados[indice_participante] == 0) {
                printf("%s\n", PARTICIPANTES[indice_participante]);
                ja_sorteados[indice_participante] = 1;
                sorteados++;
            }
        }
        free(ja_sorteados);
    }

    for(int i = 0; i < N; i++) {
        free(PARTICIPANTES[i]);
    }
    free(PARTICIPANTES);

    return 0;
}
