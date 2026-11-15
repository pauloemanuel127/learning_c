#include <stdio.h>

int somatorio(int num) {
    if(num == 1) return 1;
    return num + somatorio(num-1);
}

int main() {
    int n = 0;
    scanf("%d", &n);

    printf("%d", somatorio(n));

    return 0;
}
