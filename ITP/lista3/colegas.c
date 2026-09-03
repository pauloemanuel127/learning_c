#include <stdio.h>

int D(int num); //função que soma os divisores

int abs(int val); //função modular

void colegas(int a, int b); //função que verifica se são colegas

int main(void) {

    int num1, num2;

    scanf("%d %d", &num1, &num2);

    colegas(num1, num2);

    return 0;
}

void colegas(int a, int b) {

    if (abs(D(a) - b) <= 2 && abs(D(b) - a) <= 2) { //verificação
        printf("S\n");
    }
    else {
        printf("N\n");
    }
}

int abs(int val) {

    if (val < 0) {
        return -val;
    }
    else {
        return val;
    }
}

int D(int num) {

    int total = 1;

    for (int i = 2; i * i <= num; i++) { //iteração pelos possiveis valores divisores
        if (num % i == 0) { //teste para verificar se é mesmo divisor
            total += i;

            if (i * i != num) { //teste para ver o valor complementar de i, para diminuir a complexidade algoritmica
                total += num / i;
            }
        }
    }

    return total;
}