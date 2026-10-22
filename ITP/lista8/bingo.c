#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int numeros[10];
    int marcados;
} Cartela;

void gerarCartela(Cartela *c, int semente) {
    c->id = semente;
    c->marcados = 0;
    srand(semente);
    int i = 0;

    while (i < 10) {
        int num = (rand() % 25) + 1;
        int repetido = 0;

        for (int j = 0; j < i; j++) {
            if (c->numeros[j] == num) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            c->numeros[i++] = num;
        }
    }
}

int marcarCartela(Cartela *c, int numero) {
    for (int i = 0; i < 10; i++) {
        if (c->numeros[i] == numero) {
            c->marcados++;
            if (c->marcados == 10) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

int main() {
    int n_cartelas, seed_sorteio;

    if (scanf("%d %d", &n_cartelas, &seed_sorteio) != 2) return 0;

    Cartela cartelas[50];

    for (int i = 0; i < n_cartelas; i++) {
        gerarCartela(&cartelas[i], i + 1);
    }

    srand(seed_sorteio);
    int bolas_sorteadas[26] = {0};
    int bingo = 0;
    int id_vencedor = -1;

    while (!bingo) {
        int num = (rand() % 25) + 1;

        if (bolas_sorteadas[num]) {
            continue;
        }

        bolas_sorteadas[num] = 1;

        if (id_vencedor == -1) {
             printf("%d", num);
        } else {
             printf("%d", num);
        }
        id_vencedor = -2;

        for (int i = 0; i < n_cartelas; i++) {
            if (marcarCartela(&cartelas[i], num) == 1) {
                bingo = 1;
                id_vencedor = i;
                break;
            }
        }

        if(!bingo) {
            printf(" ");
        }
    }

    printf("\nBingo! Cartela %d:", cartelas[id_vencedor].id);
    for (int i = 0; i < 10; i++) {
        printf(" %d", cartelas[id_vencedor].numeros[i]);
    }
    printf("\n");

    return 0;
}
