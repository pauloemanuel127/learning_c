#include <stdio.h>

int main() {

    int N;
    int a = 0, m = 0;

    scanf("%d", &N);

    while (N >= 30) {

        if (N >= 365) {

            a += 1;
            N -= 365;
        }

        else if (N >= 30) {

            m += 1;
            N -= 30;
        }
    }

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", N);

    return 0;
}