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

void exibir(Chocolate *array, int n);

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();

    Chocolate array[n];
    char temp[20];

    for (int i = 0; i < n; i++) {
        fgets(array[i].nome, 50, stdin);
        array[i].nome[strlen(array[i].nome) - 1] = '\0';

        scanf("%f", &array[i].peso);
        getchar();
        scanf("%f", &array[i].preco);
        getchar();

        fgets(temp, 20, stdin); //coleta uma string e transforma na enumeração
        temp[strlen(temp) -1] = '\0';
        if (!strcmp(temp, "BRANCO")) {
            array[i].tipo = BRANCO;
        }
        else if (!strcmp(temp, "AMARGO")) {
            array[i].tipo = AMARGO;
        }
        else if (!strcmp(temp, "AO_LEITE")) {
            array[i].tipo = AO_LEITE;
        }
        else if (!strcmp(temp, "COM_CASTANHAS")) {
            array[i].tipo = COM_CASTANHAS;
        }
    }

    exibir(array, n);

    return 0;
}

void exibir(Chocolate *array, int n) { //faz toda a parte de separar quatidades pra printar
    int branco = 0, amargo = 0, ao_leite = 0, com_castanhas = 0;
    float maior_preco = array[0].preco;
    float menor_preco = array[0].preco;
    int indice_maior = 0;
    int indice_menor = 0;

    for (int i = 0; i < n; i++) {
        if (array[i].preco > maior_preco) {
            maior_preco = array[i].preco;
            indice_maior = i;
        }
        if (array[i].preco < menor_preco) {
            menor_preco = array[i].preco;
            indice_menor = i;
        }

        switch (array[i].tipo) {
            case BRANCO:
                branco++;
                break;
            case AMARGO:
                amargo++;
                break;
            case AO_LEITE:
                ao_leite++;
                break;
            case COM_CASTANHAS:
                com_castanhas++;
                break;
        }
    }

    printf("Total de chocolates BRANCO: %d\n", branco);
    printf("Total de chocolates AMARGO: %d\n", amargo);
    printf("Total de chocolates AO_LEITE: %d\n", ao_leite);
    printf("Total de chocolates COM_CASTANHAS: %d\n", com_castanhas);
    printf("Chocolate mais caro: %s - R$%.2f\n", array[indice_maior].nome, maior_preco);
    printf("Chocolate mais barato: %s - R$%.2f\n", array[indice_menor].nome, menor_preco);

}
