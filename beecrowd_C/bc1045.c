#include <stdio.h>

int main(void) {

    double A, B, C, temp;

    scanf("%lf %lf %lf", &A, &B, &C);

    for (int i = 0; i < 3; i++) {

        if (B > A) {

            temp = A;
            A = B;
            B = temp;
        }

        if (C > B) {

            temp = B;
            B = C;
            C = temp;
        }
    }

    if (A >= B + C) {

        printf("NAO FORMA TRIANGULO\n");
    }

    else {

        if ((A*A) == (B*B) + (C*C)) {

            printf("TRIANGULO RETANGULO\n");
        }

        else if ((A*A) > (B*B) + (C*C)) {

            printf("TRIANGULO OBTUSANGULO\n");
        }

        else if ((A*A) < (B*B) + (C*C)) {

            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && A == C) {

            printf("TRIANGULO EQUILATERO\n");
        }

        else if (A == B && A != C || A == C && A != B || B == C && B != A) {

            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}