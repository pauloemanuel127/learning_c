#include <stdio.h>

void transposta(int m, int n, int matriz[m][n], int result[m][n]); //faz a transposta da matriz, retorna o resultado por referencia

int main(void) {
    int m,n;
    scanf("%d %d", &m, &n);

    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int b[n][m] = {}; //matriz final vazia
    transposta(m, n, a, b);

    printf("Transposta\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void transposta(int m, int n, int matriz[m][n], int result[n][m]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matriz[i][j];
        }
    }
}
