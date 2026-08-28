#include <stdio.h>

int main(void) {

    double time = 0;
    double atl_time;
    int atl = 0;
    int series = 0;

    scanf("%lf", &time);
    scanf("%lf", &atl_time);

    while (atl_time > 0) { //verifica se o tempo feito pelo atleta é positivo antes de rodar o loop

        if (atl_time <= time) {// testa se o tempo do atleta foi adequado para realizar o teste

            atl += 1;
        }

        scanf("%lf", &atl_time);
    } 

    if (atl > 0) { //verifica a quantidade de atletas para definir o numero de series

        if (atl % 8 == 0) { //se o numero de atletas for multiplo de 8, então o numero de series sera exato

            series = atl / 8;
        }

        else { //se nao será o valor truncado da divisao do numero de atletas por 8 somado a 1

            series = (atl / 8) + 1;
        }
    }

    printf("%d %d\n", atl, series);

    return 0;
}