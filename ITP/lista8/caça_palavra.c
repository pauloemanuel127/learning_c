#include <stdio.h>
#include <string.h>
#include <ctype.h>

void imprimePalavra(char *c, int salto, int tam) {
    if (c == NULL) {
        printf("Palavra nao encontrada\n");
        return;
    }
    for (int i = 0; i < tam; i++) {
        printf("%c", *c);
        c += salto;
    }
    printf(", salto:%d\n", salto);
}

char* localizarPalavra(char *matriz, int N, char *palavra, int *salto_ret) {
    int tam = strlen(palavra);

    int dr[] = {0, 0, 1, -1, 1, 1, -1, -1};
    int dc[] = {1, -1, 0, 0, 1, -1, 1, -1};

    for (int i = 0; i < N * N; i++) {
        int r = i / N;
        int c = i % N;

        for (int d = 0; d < 8; d++) {
            int final_r = r + dr[d] * (tam - 1);
            int final_c = c + dc[d] * (tam - 1);

            if (final_r >= 0 && final_r < N && final_c >= 0 && final_c < N) {
                int salto = dr[d] * N + dc[d];
                int match = 1;
                char *inicio = matriz + i;

                for (int k = 0; k < tam; k++) {
                    if (tolower(*(inicio + k * salto)) != tolower(palavra[k])) {
                        match = 0;
                        break;
                    }
                }

                if (match) {
                    *salto_ret = salto;
                    return inicio;
                }
            }
        }
    }
    return NULL;
}

int main() {
    int qtd_palavras;

    if (scanf("%d", &qtd_palavras) != 1) return 0;

    char palavras[5][50];

    for (int i = 0; i < qtd_palavras; i++) {
        scanf("%s", palavras[i]);
    }

    char matriz_linear[100];
    char linha_temp[11];

    for (int i = 0; i < 10; i++) {
        scanf("%s", linha_temp);
        for (int j = 0; j < 10; j++) {
            matriz_linear[i * 10 + j] = linha_temp[j];
        }
    }

    for (int i = 0; i < qtd_palavras; i++) {
        int salto = 0;
        char *endereco = localizarPalavra(matriz_linear, 10, palavras[i], &salto);
        imprimePalavra(endereco, salto, strlen(palavras[i]));
    }

    return 0;
}
