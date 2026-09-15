#include <stdio.h>

#define max 100 //define uma variavel estatica na memoria

typedef struct  { //Typedef dá nome à alguma estrutura, enumeração ou outros tipos de dados.
    int preco;    //Struct funciona como classes de linguagens orientadas ao objeto, recebe atributos, porém não possui métodos.
    int quantidade;
    char nome[50];
} produto;

void print_arr(produto vet[], int tam);

int main(void) {
    int n;
    printf("Digite a quantidade de itens variados: ");
    scanf("%d", &n);

    if (n > max) {
        printf("Você excedeu o tamanho limite, re-execute o programa para recomeçar");
        return 1;
    }

    produto itens[max];
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do produto: ");
        scanf("%s", itens[i].nome);

        printf("Digite o preço do produto: ");
        scanf("%d", &itens[i].preco);

        printf("Digite a quantidade de estoque desse produto: ");
        scanf("%d", &itens[i].quantidade);
    }

    print_arr(itens, n);

    return 0;

}

void print_arr(produto vet[], int tam) {
    printf("Estoque:\n");

    for (int i = 0; i < tam; i++) {
        printf("%s - preço: %d - quantidade: %d\n", vet[i].nome, vet[i].preco, vet[i].quantidade);
    }
}
