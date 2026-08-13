#include <stdio.h>

int main() {

    float dis, val, res;

    scanf("%f", &dis);

    val = dis/30;
    res = val * 60;

    printf("%.f minutos\n", res);

    return 0;

}