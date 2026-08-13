#include <stdio.h>

int main() {

    float time, speed, res;
    float cons = 12;

    scanf("%f", &time);
    scanf("%f", &speed);

    res = (time*speed)/cons;

    printf("%.3f\n", res);

    return 0;
}