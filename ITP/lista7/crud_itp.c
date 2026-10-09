#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char genero;
} user;

user criar(char *nome, int idade, char genero); //cria a nova struct

void inserir(user *array, user added); //insere o user no array

void deletar(user *array, user deleted); //deleta o user selecionado

void imprimir(user *array); //imprime o array

int main(void) {
    user array[100] = {0};
    char escolha;
    char nome[50];
    int idade;
    char genero;

    while (1) { //enquanto n foi solicitado pra imprimir recebe entradas
        scanf("%c", &escolha);

        if (escolha == 'i') {
            getchar();
            fgets(nome, 50, stdin);
            nome[strlen(nome) - 1] = '\0';

            scanf("%d", &idade);
            getchar();
            scanf("%c", &genero);
            getchar();

            user add = criar(nome, idade, genero);
            inserir(array, add);
        }
        else if (escolha == 'd') {
            getchar();
            fgets(nome, 50, stdin);
            nome[strlen(nome) - 1] = '\0';

            scanf("%d", &idade);
            getchar();
            scanf("%c", &genero);
            getchar();

            user remove = criar(nome, idade, genero);
            deletar(array, remove);
        }
        else if (escolha == 'p') {
            imprimir(array);
            break;
        }
    }

    return 0;
}

user criar(char *nome, int idade, char genero) {
    user temp;
    strcpy(temp.nome, nome);
    temp.idade = idade;
    temp.genero = genero;

    return temp;
}

void inserir(user *array, user added) {
    int cont = 0;
    while (array[cont].nome[0] != '\0') {
        cont++;
    };

    array[cont] = added;

    return;
}

void deletar(user *array, user deleted) {
    int cont = 0;
    while (array[cont].nome[0] != '\0') {
        cont++;
    };

    int local = -1;
    for (int i = 0; i < cont; i++) {
        if (strcmp(array[i].nome, deleted.nome) == 0 && array[i].idade == deleted.idade && array[i].genero == deleted.genero) {
            local = i;
            break;
        }
    }

    if (local == -1) {
        return;
    }
    for (int i = local; i <= cont; i++) {
        array[i] = array[i + 1];
    }

    return;
}

void imprimir(user *array) {
    int cont = 0;
    while (array[cont].nome[0] != '\0') {
        cont++;
    };

    for (int i = 0; i < cont; i++) {
        printf("%s,%d,%c\n", array[i].nome, array[i].idade, array[i].genero);
    }
    return;
}
