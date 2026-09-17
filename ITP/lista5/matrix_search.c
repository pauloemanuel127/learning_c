#include <stdio.h>

int search(int n, int m, int matrice[n][m], int target); //função de busca

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int alvo;
    scanf("%d", &alvo);

    int result = search(n, m , matriz, alvo); //variavel equivalente a bool que armazena 1 ou 0 (true ou false)

    if (result) {
        printf("Matriz tem elemento %d", alvo);
    }
    else {
        printf("Matriz não tem elemento %d", alvo);
    }

    return 0;
}

int search(int n, int m, int matrice[n][m], int target) { //itera pelo array, se encontrar valores iguais retorna true se não false
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrice[i][j] == target) {
                return 1;
            }
        }
    }

    return 0;
}
