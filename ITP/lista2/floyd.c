#include <stdio.h>

int main(void) {

    int n;
    int value = 1;

    scanf("%d", &n);
    if (n > 0) {

        for (int i = 1; i <= n; i ++) { //iterador para realizar a quantidade de linhas

            for (int j = 1; j <= i; j++) { //iterador para os numeros de cada linha

                printf("%2d ", value);
                value += 1;
                continue;
            }

            printf("\n");
        }
    }

    else {

        printf("Você entrou com %d, tente de novo na próxima", n);
    }
    return 0;
}