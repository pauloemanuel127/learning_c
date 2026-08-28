#include <stdio.h>

int main(void) {

    double time = 0;
    double atl_time;
    int atl = 0;
    int series = 0;

    scanf("%lf", &time);
    scanf("%lf", &atl_time);

    while (atl_time > 0) {

        if (atl_time <= time) {

            atl += 1;
        }

        scanf("%lf", &atl_time);
    } 

    if (atl > 0) {

        if (atl % 8 == 0) {

            series = atl / 8;
        }

        else {

            series = (atl / 8) + 1;
        }
    }

    printf("%d %d\n", atl, series);

    return 0;
}