#include <stdio.h>

int main(void) {

    int val, palindromo, original, digito;

    scanf("%d", &val);

    original = val;

    while (val) {

        digito = val % 10;
        palindromo = (palindromo * 10) + digito;
        val /= 10;
    }

    if (palindromo == original) {

        if (original % 2 == 0) {

            printf("%d é Palíndromo e par.\n", original);
        }

        else {

            printf("%d é Palíndromo e impar.\n", original);
        }
    }

    else {

        if (original % 2 == 0) {

            printf("%d não é Palíndromo e par.\n", original);
        }

        else {

            printf("%d não é Palíndromo e impar.\n", original);
        }
    }
}