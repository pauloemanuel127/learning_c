#include <stdio.h>
#include <string.h>
#include <ctype.h>  //para ignorar os maiúsculas e minúsculas

int main(void) {
    //inicialização das strings
    char str1[40] = "";
    char str2[40] = "";
    fgets(str1, 40, stdin);
    fgets(str2, 40, stdin);

    //removendo o '\n'
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';

    //fazendo as strings ficarem minusculas
    for (int i = 0; i < strlen(str1); i++) {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < strlen(str2); i++) {
        str2[i] = tolower(str2[i]);
    }

    //contador para o numero de repetições, e um array de endereços
    int contador = 0;
    int endereços[40] = {};

    //aqui o loop para endereço por endereço da string 1, verificando o nela se os elementos tem mesmo valor em substrings de mesmo tamanho, por meio da função strncmp
    for(int i = 0; i < strlen(str2); i++) {
        if(strncmp(str1, str2+i, strlen(str1)) == 0) { //strncmp verifica o valor ascii, logo se for igual a 0 eles tem mesmo valor, uso str2+i para mudar o local onde a str2 começa a ser verificada
            endereços[contador] = i; //adiciona o endereço
            contador += 1;
        }
    }

    printf("Repetições: %d\n", contador);

    if (contador != 0) { //se nao tiver nenhuma repetição não fala as posições
        printf("Posições: ");
        for (int i = 0; i < contador; i++) {
            printf("%d ", endereços[i]);
        }
        printf("\n");
    }

    return 0;
}
