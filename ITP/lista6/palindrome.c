#include <stdio.h>
#include <string.h>

int main(void) {
    //declarando as strings
    char str1[50] = "";
    char str2[50] = "";
    char aux[50] = "";

    //lendo a str1 e removendo o '\n'
    fgets(str1, 50, stdin);
    str1[strlen(str1) - 1] = '\0';

    //removendo as barras de espaço, usando 2 contadores
    int j = 0;
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != ' ') {
            str2[j] = str1[i];
            j++;
        }
    }

    //invertendo a str1 na str aux
    int tamanho = strlen(str2) - 1;
    for (int i = 0; i < strlen(str2); i++) {
        aux[tamanho] = str2[i];
        tamanho -= 1;
    }

    //verificando se é palindromo
    if(strcmp(str2, aux) == 0) {
        printf("É palíndromo\n");
    }
    else {
        printf("Não é palíndromo\n");
    }

    return 0;
}
