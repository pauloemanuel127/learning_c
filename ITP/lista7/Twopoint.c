#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} tCoordenada;

double dist(tCoordenada p1, tCoordenada p2);

int main(void) {
    tCoordenada coordenada1;
    tCoordenada coordenada2;

    //scans das coordenadas em cada eixo
    scanf("%d", &coordenada1.x);
    scanf("%d", &coordenada1.y);
    scanf("%d", &coordenada2.x);
    scanf("%d", &coordenada2.y);

    double distancia = dist(coordenada1, coordenada2);

    printf("Distância: %.2f", distancia);

    return 0;
}

double dist(tCoordenada p1, tCoordenada p2) {
    double d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

    return d;
}
