#include <stdio.h>

void alcancar(int x, int v1, int v2);

int main(void) {

    int dist, v1, v2;

    scanf("%d %d %d", &dist, &v1, &v2);
    alcancar(dist, v1, v2);

    return 0;
}

void alcancar(int x, int v1, int v2) {

    if (v2 >= v1) {
        printf("impossivel\n");
        return;
    }

    printf("%ds\n", x / (v1 - v2));
}