#include <stdio.h>

int total(int n, int matriz[n][n]); //função que soma as diagonais

int main(void) {
    int n;
    scanf("%d", &n);

    int matriz[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int result = total(n, matriz); //armazena o valor da soma

    printf("%d", result);

    return 0;
}

int total(int n, int matriz[n][n]) { //calcula a soma das diagonais principais e secundarias
    int result = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) { //diagonal principal tem i e j com mesmo valor sempre
                result += matriz[i][j];
            }
            if (i + j == n - 1) { //a diagonal secundaria a soma dos valores de i e j sempre dão igual a n, como vetor começa em 0 usamos n-1
                result += matriz[i][j];
            }
        }
    }

    return result;
}
