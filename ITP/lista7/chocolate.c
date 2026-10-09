#include <stdio.h>
#include <string.h>

typedef enum {
    BRANCO,
    AMARGO,
    AO_LEITE,
    COM_CASTANHAS
} TipoChocolates;

typedef struct {
    char nome[50];
    float peso;
    float preco;
    TipoChocolates tipo;
} Chocolate;

void exibir(Chocolate *array);

int main(void) {
    int n;
    scanf("%d", &n);

    Chocolate array[n];

    for (int i = 0; i < n; i++) {
        getchar();
        fgets(array[i].nome, 50, stdin);
        array[i].nome[strlen(array[i].nome) - 1] = '\0';
        scanf("%f", &array[i].peso);
        getchar();
        scanf("%f", &array[i].preco);
        getchar();
        scanf("%d", &array[i].tipo);
        getchar();
    }

    exibir(array);

    return 0;
}
