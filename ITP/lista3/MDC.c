#include <stdio.h>

int MDC(int x, int y);

int main(void) {

    int x, y;

    scanf("%d %d", &x, &y);

    printf("MDC(%d , %d) = %d\n", x, y, MDC(x, y));

    return 0;
}

int MDC(int x, int y) {

    if (y == 0) { //verifica o primeiro caso onde y é zero e o mdc é x
        return x;
    }

    else {
        
        do { //realiza o loop até que y <= 0, para assim chegar no real valor do mdc
            int aux = x;
            x = y;
            y = aux % y;

        } while (y > 0);

        return x;
    }
}