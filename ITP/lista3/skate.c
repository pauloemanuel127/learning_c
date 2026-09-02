#include <stdio.h>

int mediana(int a, int b, int c);
int score(int a, int b, int c);
void campeao(int a, int b);

int main(void) {

    int n1, n2, n3, An1, An2, An3, Bn1, Bn2, Bn3, Af, Bf;

    for (int i = 0; i < 6; i++) {
        scanf("%d %d %d", &n1, &n2, &n3);

        switch (i) {

            case 0:
                An1 = score(n1, n2, n3);
                break;
            
            case 1:
                An2 = score(n1, n2, n3);
                break;
            
            case 2:
                An3 = score(n1, n2, n3);
                break;

            case 3:
                Bn1 = score(n1, n2, n3);
                break;
            
            case 4:
                Bn2 = score(n1, n2, n3);
                break;
                
            case 5:
                Bn3 = score(n1, n2, n3);
                break;
        }
    }

    Af = score(An1, An2, An3);
    Bf = score(Bn1, Bn2, Bn3);
    
    campeao(Af, Bf);

    return 0;
}

int mediana(int a, int b, int c) {

    int temp;

    for (int i = 0; i < 3; i++) {
        if (b > a) {
            temp = a;
            a = b;
            b = temp;
        }
        if (c > a) {
            temp = a;
            a = c;
            c = temp;
        }
        if (c > b) {
            temp = b;
            b = c;
            c = temp;
        }
    }

    return b;
}

int score(int a, int b, int c) {

    if (a == b || a == c) {
        return a;
    }
    if (b == c) {
        return b;
    }

    else return mediana(a, b, c);
}

void campeao(int a, int b) {

    if (a == b) {
        printf("empate");
        return;
    }
    if (a > b) {
        printf("A");
        return;
    }
    printf("B");
}