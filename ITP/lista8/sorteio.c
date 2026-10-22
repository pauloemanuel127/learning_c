#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char PARTICIPANTES[100][256];
    int N = 0;
    char buffer[256];

    while (1) {
        scanf(" %[^\n]", buffer);
        if (strcmp(buffer, "acabou") == 0) {
            break;
        }
        strcpy(PARTICIPANTES[N], buffer);
        N++;
    }

    int S;
    scanf("%d", &S);
    srand(S);

    if (N > 0) {
        int ja_sorteados[100] = {0};
        int quantidade_sorteados = 0;

        while (quantidade_sorteados < N) {
            int indice_participante = rand() % N;

            if (ja_sorteados[indice_participante] == 0) {
                printf("%s\n", PARTICIPANTES[indice_participante]);
                ja_sorteados[indice_participante] = 1;
                quantidade_sorteados++;
            }
        }
    }

    return 0;
}
