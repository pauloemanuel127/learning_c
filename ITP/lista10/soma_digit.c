#include <stdio.h>

int soma(int num) {
    if(num < 10) return num;
    return num % 10 + soma((int) num / 10);
}

int main() {
    int n = 0;
    scanf("%d", &n);

    printf("%d", soma(n));

    return 0;
}
