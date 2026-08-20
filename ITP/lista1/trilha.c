#include <stdio.h>

int main() {

    int trilhas;

    scanf("%d", &trilhas);

    if (trilhas < 5) {

        printf("Iniciante\n");
        
    }

    else {

        int fisico;
        scanf("%d", &fisico);

        if (trilhas < 20 && fisico == 0) {

            printf("Iniciante\n");

        } 
        else if (trilhas >= 20 && fisico == 1) {

            printf("Avançado\n");

        } 
        else {

            printf("Intermediário\n");

        }
    }

    return 0;
}