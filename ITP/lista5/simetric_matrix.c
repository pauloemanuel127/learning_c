#include <stdio.h>

int simetrico(int n, int matriz[n][n]); //função que verifica a simetria

int main(void) {
    int n;
    scanf("%d", &n);

    int matriz[n][n]; //matriz NxN
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int result = simetrico(n, matriz); //resultado por bool, sendo 1 true 0 false

    if (result == 0) {
        printf("A matriz nao e simetrica");
    }
    else {
        printf("A matriz e simetrica");
    }

    return 0;
}

int simetrico(int n, int matriz[n][n]) { //itera a matriz e compara apenas os triangulos superior e inferior pelos seus equivalentes
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            else if (matriz[i][j] != matriz[j][i]){
                return 0;
            }
        }
    }

    return 1;
}
