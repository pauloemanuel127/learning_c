#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int numero;
} tPessoa;

int main(void) {
    int n;
    scanf("%d", &n);
    getchar(); //limpeza do buffer de entrada

    tPessoa registro_telefonico[n]; //vetor com tamanho n

    for (int i = 0; i < n; i++) { //organizando as informações na struct
        fgets(registro_telefonico[i].nome, 50, stdin);
        registro_telefonico[i].nome[strlen(registro_telefonico[i].nome) - 1] = '\0';
        scanf("%d", &registro_telefonico[i].numero);
        getchar();
    }

    char alvo[50];
    fgets(alvo, 50, stdin);
    alvo[strlen(alvo) - 1] = '\0';

    for (int i = 0; i < n; i++) { //busca linear
        if (strcmp(alvo, registro_telefonico[i].nome) == 0) {
            printf("O telefone de %s é %d\n", registro_telefonico[i].nome, registro_telefonico[i].numero);

            return 0;
        }
    }

    printf("Nome %s não encontrado.\n", alvo);

    return 0;
}
