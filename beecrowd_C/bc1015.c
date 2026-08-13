#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, y1, y2, res_x, res_y, dis;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    res_x = x2 - x1;
    res_y = y2 - y1;

    res_x = pow(res_x, 2.0);
    res_y = pow(res_y, 2.0);

    dis = sqrt(res_x + res_y);

    printf("%.4lf\n", dis);

    return 0;

}