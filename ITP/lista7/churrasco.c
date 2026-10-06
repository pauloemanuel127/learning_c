#include <stdio.h>
#include <string.h>

typedef struct { //struct que armazena as caracteristicas do item
    char item[50];
    int preco;
    int quantidade;

} Item_Churrasco;

int main(void) {
    Item_Churrasco lista[100];
    int add;
    int indice = 0;

    do { //inicialização dos elementos dos itens
        fgets(lista[indice].item, 50, stdin);
        lista[indice].item[strlen(lista[indice].item) - 1] = '\0';
        scanf("%d", &lista[indice].preco);
        scanf("%d", &lista[indice].quantidade);
        scanf("%d", &add);
        indice++;
    }while(add != 2);

    int pessoas;
    int valor;

    scanf("%d", &pessoas);

    for (int i = 0; i < indice; i++) { //soma do valor total
        valor += lista[i].preco * lista[i].quantidade;
    }

    printf("Valor: R$ %.2f\n", (float)valor);
    printf("Divisão R$ %.2f para cada participante.\n", (float)valor/pessoas);

    return 0;
}
