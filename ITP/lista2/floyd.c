#include <stdio.h>

int main(void) {

    int n;
    int value = 1;

    scanf("%d", &n);
    if (n > 0) {

        for (int i = 1; i <= n; i ++) {

            for (int j = 1; j <= i; j++) {

                if (value < 10) {
                    
                    printf(" %d ", value);
                    value += 1;
                    continue;
                }

                printf("%d ", value);
                value += 1;
            }

            printf("\n");
        }
    }

    else {

        printf("Você entrou com %d, tente de novo na próxima", n);
    }
    return 0;
}