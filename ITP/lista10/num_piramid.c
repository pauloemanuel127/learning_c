#include <stdio.h>

void linha(int num) {
    if(num == 1) {
        printf("%d\n", num);
        return;
    }

    printf("%d ", num);
    linha(num - 1);
}

void piramid(int n) {
    if(n <= 0) return;

    piramid(n - 1);
    linha(n);
}

int main() {
    int n = 0;
    scanf("%d", &n);
    piramid(n);
    return 0;
}
