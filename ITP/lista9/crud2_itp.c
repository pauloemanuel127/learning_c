#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
    int idade;
    char genero;
} user;

user criar(char *nome, int idade, char genero);

void inserir(user *array, user added);

void deletar(user *array, user deleted);

void imprimir(user *array);

int main(void) {
    char escolha;
    int idade;
    char genero;

    // Cria a string como um ponteiro que aponta para NULL (boas praticas), aloca a memoria e verifica caso tenha falhado
    char *nome = NULL;
    nome = malloc(1000000 * sizeof(char));
    if(nome == NULL) {
        printf("Falha ao alocar memoria");
        return 1;
    }

    // Cria o array como um ponteiro que aponta para NULL (boas praticas), aloca a memoria já limpando a sujeira e verifica caso tenha falhado
    user *array = NULL;
    array = calloc(1000000, sizeof(user));
    if(array == NULL) {
        printf("Erro ao alocar memoria");
        return 1;
    }

    while (1) {
        scanf("%c", &escolha);

        if (escolha == 'i') {
            getchar();
            fgets(nome, 1000000, stdin);
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
            fgets(nome, 1000000, stdin);
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

    //libera a memoria das strucs (alocadas dentro da função criar)
    for(int i = 0; (array+i)->nome != NULL; i++) {
        free((array+i)->nome);
    }

    //libera a memoria dos arrays
    free(array);
    free(nome);

    return 0;
}

user criar(char *nome, int idade, char genero) {
    user temp;
    user *ptr = &temp;

    //aloca o tamanho certo necessario para o nome de cada struct criada
    ptr->nome = malloc((strlen(nome)+1) * sizeof(char));
    strcpy(ptr->nome, nome);
    ptr->idade = idade;
    ptr->genero = genero;

    return temp;
}

void inserir(user *array, user added) {
    int cont = 0;
    while (array[cont].nome != NULL) {
        cont++;
    };

    array[cont] = added;

    return;
}

void deletar(user *array, user deleted) {
    int cont = 0;
    while (array[cont].nome != NULL) {
        cont++;
    };

    int local = -1;
    for (int i = 0; i < cont; i++) {
        if (strcmp(array[i].nome, deleted.nome) == 0 && array[i].idade == deleted.idade && array[i].genero == deleted.genero) {
            local = i;
            break;
        }
    }

    //libera o espaço da struct criada para a comparação
    free(deleted.nome);

    if (local == -1) {
        return;
    }

    //libera o espaço do local que vai ser apagado
    free(array[local].nome);

    for (int i = local; i < cont; i++) {
        array[i] = array[i + 1];
    }

    return;
}

void imprimir(user *array) {
    int cont = 0;
    while (array[cont].nome != NULL) {
        cont++;
    };

    for (int i = 0; i < cont; i++) {
        printf("%s,%d,%c\n", array[i].nome, array[i].idade, array[i].genero);
    }
    return;
}
