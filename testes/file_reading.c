#include <stdio.h>

int main() {

    FILE *test = fopen("teste.txt", "r");
    fseek(test, 0L, SEEK_END);

    int tamanho = ftell(test);

    printf("%d\n", tamanho);

    return 0;
}
