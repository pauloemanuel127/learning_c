#include <stdio.h>
#include <stdbool.h>

bool primo(int x);

int main(void) {

    int x;

    scanf("%d", &x);

    if (primo(x) && primo(x + 2)) { //verifica se x e x + 2 são primos gemeos
        printf("Numero forma par de gemeos\n");
    }
    else {
        printf("Numero nao forma par de gemeos\n");
    }

    return 0;
}

bool primo(int x) {

    //testes que verificam se o numero se enquadra como primo ou não
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (int i = 3; i * i <= x; i += 2) { //iterador que verifica se os numeros são divisiveis por valores impares

        if (x % i == 0) {
            return false;
        }
    }

    return true; //caso passe por tudo retorna true
}