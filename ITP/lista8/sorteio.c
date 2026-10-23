#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **PARTICIPANTES = NULL;
    int N = 0;
    char buffer[256];

    while (1) {
        scanf(" %[^\n]", buffer);
        if (strcmp(buffer, "acabou") == 0) {
            break;
        }
        PARTICIPANTES = realloc(PARTICIPANTES, (N + 1) * sizeof(char *));
        PARTICIPANTES[N] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(PARTICIPANTES[N], buffer);
        N++;
    }

    int S;
    scanf("%d", &S);
    srand(S);

    if (N > 0) {
        int *ja_sorteados = calloc(N, sizeof(int));
        int quantidade_sorteados = 0;

        while (quantidade_sorteados < N) {
            int indice_participante = rand() % N;

            if (ja_sorteados[indice_participante] == 0) {
                printf("%s\n", PARTICIPANTES[indice_participante]);
                ja_sorteados[indice_participante] = 1;
                quantidade_sorteados++;
            }
        }
        free(ja_sorteados);
    }

    for (int i = 0; i < N; i++) {
        free(PARTICIPANTES[i]);
    }
    free(PARTICIPANTES);

    return 0;
}
