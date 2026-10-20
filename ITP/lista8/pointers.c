#include <stdio.h>

void maior(int *valor1, int *valor2);

int main() {
    int valor1, valor2;

    scanf("%d %d", &valor1, &valor2);

    maior(&valor1, &valor2);

    printf("%d\n%d", valor1, valor2);

    return 0;
}

void maior(int *valor1, int *valor2) {
    if(*valor2 > *valor1) {
        int temp = *valor1;
        *valor1 = *valor2;
        *valor2 = temp;
    }

    return;
}
