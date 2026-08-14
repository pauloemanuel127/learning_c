#include <stdio.h>

int main() {

    int N, valor;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    scanf("%d", &N);

    valor = N;

    while (N > 0) {

            if (N >= 100) {

                n100 += 1;
                N -= 100;

            }

            else if (N >= 50) {

                n50 += 1;
                N -= 50;

            }

            else if (N >= 20) {

                n20 += 1;
                N -= 20;

            }

            else if (N >= 10) {

                n10 += 1;
                N -= 10;

            }

            else if (N >= 5) {

                n5 += 1;
                N -= 5;

            }

            else if (N >= 2) {

                n2 += 1;
                N -= 2;

            }

            else if (N >= 1) {

                n1 += 1;
                N -= 1;

            }

    }

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    
    return 0;
}