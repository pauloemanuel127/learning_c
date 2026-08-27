#include <stdio.h>

int main(void) {

    int val, palindromo = 0, original, digito;

    scanf("%d", &val);

    original = val; //Clone do valor de entrada para ser utilizado na comparação

    while (val) {

        digito = val % 10; //Salva o valor da unidade do numero
        palindromo = (palindromo * 10) + digito; //Multiplica o valor anterior por 10 para depois adicionar o proximo digito, montando assim o palindromo
        val /= 10; //Remove a unidade do numero pegando apenas a divisão sem o resto
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

    return 0;
}