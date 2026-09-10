#include <stdio.h>

int main(void) {

    char item[20];
    float preco;
    int quant;
    float total;

    printf("Qual item você deseja comprar?\n");
    scanf("%s", item);
    printf("Qual o preço desse item?\n");
    scanf("%f", &preco);
    printf("Quantos você vai levar?\n");
    scanf("%d", &quant);

    total = quant * preco;

    printf("Você comprou %d %s/s.\n", quant, item);
    printf("O total foi %.2f.\n", total);
    printf("Cada %s saiu pelo preço de %.2f.\n", item, preco);

    return 0;
}
