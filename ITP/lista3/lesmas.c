#include <stdio.h>

int nivel(int vel);

int main(void) {

    int n;
    scanf("%d", &n);

    int maior;
    scanf("%d", &maior); //primeiro valor de velocidade

    for (int i = 1; i < n; i++) { //entrada dos outros valores e verificação do maior
        int vel;
        scanf("%d", &vel);

        if (vel > maior) {
            maior = vel;
        }
    }

    int level = nivel(maior);
    printf("Level %d\n", level);

    return 0;
}

int nivel(int vel) { //verifica qual o nivel da velocidade

    if (vel < 10) {
        return 1;
    }
    else if (vel < 20) {
        return 2;
    }
    else {
        return 3;
    }
}