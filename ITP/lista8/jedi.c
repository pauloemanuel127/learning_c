#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** separa(char *str, int *quantidadeTextos) {
    char **textoSeparado = NULL;
    char *texto = strtok(str, " ");
    int cont = 0;

    while (texto != NULL) {
        textoSeparado = realloc(textoSeparado, (cont + 1) * sizeof(char *));
        textoSeparado[cont] = texto;
        cont++;
        texto = strtok(NULL, " ");
    }

    *quantidadeTextos = cont;
    return textoSeparado;
}

char* junta(char **vetor_strings, int tamanho_vetor) {
    int tamanho_final = 0;
    for (int i = 0; i < tamanho_vetor; i++) {
        tamanho_final += strlen(vetor_strings[i]) + 1;
    }

    char *strings_unidas = malloc(tamanho_final + 1);
    strings_unidas[0] = '\0';

    for (int i = 0; i < tamanho_vetor; i++) {
        strcat(strings_unidas, vetor_strings[i]);
        if (i < tamanho_vetor - 1) {
            strcat(strings_unidas, " ");
        }
    }

    return strings_unidas;
}

char* embaralhar(char *texto) {
    srand(5940);
    int N = 0;
    char **M = separa(texto, &N);

    if (N == 0) {
        free(M);
        char *vazio = malloc(1);
        vazio[0] = '\0';
        return vazio;
    }

    char **E = NULL;
    int k = 0;

    int *vistos = calloc(N, sizeof(int));
    int unicos = 0;

    while (unicos < N) {
        int n = rand();
        int idx = n % N;

        E = realloc(E, (k + 1) * sizeof(char *));
        E[k] = M[idx];

        if (vistos[idx] == 0) {
            vistos[idx] = 1;
            unicos++;
        }
        k++;
    }

    char *R = junta(E, k);

    free(vistos);
    free(M);
    free(E);

    return R;
}

int main() {
    char mensagem[505];

    if (scanf(" %[^\n]", mensagem) == 1) {
        char *resultado = embaralhar(mensagem);
        printf("%s\n", resultado);
        free(resultado);
    }

    return 0;
}
