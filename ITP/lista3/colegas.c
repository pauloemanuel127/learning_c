#include <stdio.h>

int D(int num);

int abs(int val);

void colegas(int a, int b);

int main(void) {

    int num1, num2;

    scanf("%d %d", &num1, &num2);

    colegas(num1, num2);
}

void colegas(int a, int b) {

    if (abs(D(a) - b) <= 2 && abs(D(b) - a) <=2) {
        printf("S");
    }
    else {
        printf("N");
    }
}

int abs(int val) {

    if (val < 0) {
        return -val;
    }
    else {
        return val;
    }
}

int D(int num) {

    
}