#include <stdio.h>
#include <string.h> //lib string possui uma função para comparação de strings e vetores

#define tam 8 //define o valor da variavel tam como constante para evitar a repetição

int main(void) {

    char frutas[tam][30]; //vetor 2d que armazena as strings
    for (int i = 0; i < tam; i++) { //iterador para armazenar as strings
        scanf("%29s", frutas[i]);
    }

    char alvo[30];
    scanf("%29s", alvo);

    for (int i = 0; i < tam; i++) { //iterador para verificar a igualdade e gerar o retorno
        if (strcmp(frutas[i],alvo) == 0) {
            printf("encontrei\n");
        }
        else {
            printf("não\n");
        }
    }

    return 0;
}
