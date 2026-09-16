#include <stdio.h>

int subtração(int m, int n, int matriz1[m][n], int matriz2[m][n], int result[m][n]); //função da subtração, retorna o contador de zeros

void print_array(int m, int n, int result[m][n]); //função pra exibir o array formatado

int main(void) {
    int m,n;
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n]; //matrizes MxN

    for (int i = 0; i < m; i++) { //scan da matriz 1
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++) { //scan da matriz 2
        for(int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int c[m][n]; //matriz final, também MxN

    int zeros = subtração(m, n, a, b, c);;

    printf("Resultado:\n");
    print_array(m, n, c);
    printf("Elementos não-nulos na região: %d\n", zeros);

    return 0;
}

int subtração(int m, int n, int matriz1[m][n], int matriz2[m][n], int result[m][n]) {
    int cont = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matriz1[i][j] - matriz2[i][j]; //resultado da subtração

            if (j < i && result[i][j] != 0) { //condição do contador para o triangulo inferior
                cont++;
            }
        }
    }

    return cont; //retorna o contador de zeros
}

void print_array(int m, int n, int result[m][n]) { //exibi o array no formato
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
