#include <stdio.h>

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

int main(void) {

    return 0;
}
