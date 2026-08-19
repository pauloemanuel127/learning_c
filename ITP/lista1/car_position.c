#include <stdio.h>

int abs(int a) {

    if (a < 0) {

        return -a;
    }

    else {

        return a;
    }
}

int main() {

    int C, C1, C2;

    scanf("%d", &C);    
    scanf("%d", &C1);    
    scanf("%d", &C2); 

    if ((C > C1 && C > C2) || (C < C1 && C < C2)) {

        printf("C\n");
        
    }

    else {

        int dist1 = abs(C1 - C);
        int dist2 = abs(C2 - C);

        if (dist1 == dist2) {

            printf("C\n");

        }
        
        else if ((C1 < C && dist1 < dist2) || (C2 < C && dist2 < dist1)) {

            printf("A\n");

        }

        else {

            printf("F\n");

        }
    }

    return 0;
}