#include <stdio.h>

float calculaMedia(char tipo, float n1, float n2, float n3);

int main(void) {

    char tipo;
    float n1, n2, n3;

    scanf("%c %f %f %f", &tipo, &n1, &n2, &n3);

    printf("Média %.2f", calculaMedia(tipo, n1, n2, n3));

    return 0;
}

float calculaMedia(char tipo, float n1, float n2, float n3) { //calcula as medias aritmeticas e ponderada, levando em consideração o tipo selecionado

    switch (tipo) {

        case 'A':
            return (n1 + n2 + n3) / 3;
        case 'P':
            return ((4 * n1) + (5 * n2) + (6 * n3)) / 15;
    }
}