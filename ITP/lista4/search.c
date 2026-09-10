#include <stdio.h>
#include <string.h>

#define tam 8

int main(void) {

    char frutas[tam][30];
    for (int i = 0; i < tam; i++) {
        scanf("%29s", frutas[i]);
    }

    char alvo[30];
    scanf("%29s", alvo);

    for (int i = 0; i < tam; i++) {
        if (strcmp(frutas[i],alvo) == 0) {
            printf("encontrei\n");
        }
        else {
            printf("não\n");
        }
    }

    return 0;
}
