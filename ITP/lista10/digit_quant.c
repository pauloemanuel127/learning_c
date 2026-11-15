#include <stdio.h>

int contador(int num) {
    if (num < 9) return 1;
    return 1 + contador((int) num/10);
}

int main() {
    int n = 0;
    scanf("%d", &n);

    printf("%d", contador(n));

    return 0;
}
