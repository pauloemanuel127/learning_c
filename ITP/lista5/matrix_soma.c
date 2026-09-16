#include <stdio.h>

void soma(int m, int n, int matriz1[m][n], int matriz2[m][n], int result[m][n]); //função da soma, não tem retorno literal, a matriz final retorna via referencia

int main(void) {
    int m,n;
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n]; //matrizes MxN

    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int c[m][n] = {}; //matriz final inicializada vazia

    soma(m, n, a, b, c);

    for (int i = 0; i < m; i++) { //exibição do resultado
        for (int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void soma(int m, int n, int matriz1[m][n], int matriz2[m][n], int result[m][n]) { //realiza a soma e retorna o array final por referencia
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
