#include <stdio.h>
#include <math.h>

int main() {

    int x1, x2, y1, y2, abs_x, abs_y;

    while (1) {
        
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int X[3] = {x1, y1};
        int Y[3] = {x2, y2};

        abs_x = x1 - x2;
        abs_y = y1 - y2;

        if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) {
            break;
        }

        if(X[0] == Y[0] && X[1] == Y[1]) {

            printf("0\n");
        }

        else if(x1 == x2 || y1 == y2 || fabs(abs_x) == fabs(abs_y)) {

            printf("1\n");
        }

        else {

            printf("2\n");
        }

    }


}
