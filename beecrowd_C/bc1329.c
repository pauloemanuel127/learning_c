#include <stdio.h>

int main() {

    int n, jogadas[10001];

    while (1) {

        int mary = 0;
        int john = 0;

        scanf("%d", &n);

        if (n == 0) {

            break;
        }

        for (int i = 0; i < n; i++) {

            scanf("%d", &jogadas[i]);
        }

        for (int j = 0; j < n; j++) {

            if (jogadas[j] == 0) {

                mary += 1;
            }

            else if (jogadas[j] == 1) {

                john += 1;
            }
        }

        printf("Mary won %d times and John won %d times\n", mary, john);
    
    }
    return 0;
}   
