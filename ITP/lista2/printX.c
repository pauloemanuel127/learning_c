#include <stdio.h>

int main(void) {

    int n;
    char c;

    scanf("%d %c", &n, &c);

    for (int i = 1; i < n; i++) { //Iteração para as linhas

        for (int j = 1; j < n; j++) { //Iteração para as colunas

            if (i == j || i+j == n) {  //Verifica as diagonais para poder colocar o caracter
                
                printf("%c", c);
            }
            else {

                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}