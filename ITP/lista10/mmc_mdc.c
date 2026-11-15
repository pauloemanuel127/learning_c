#include <stdio.h>

int MDC(int n1, int n2) {
    if(n2 == 0) return n1;

    return MDC(n2, n1 % n2);
}

void calc_mdc_mmc(int x, int y, int *mdc, int *mmc) {
    *mdc = MDC(x, y);
    *mmc = (x * y) / (*mdc);
}

int main() {
    int x, y, mdc, mmc;
    scanf("%d %d", &x, &y);
    calc_mdc_mmc(x, y, &mdc, &mmc);

    printf("MDC = %d, MMC = %d\n", mdc, mmc);

    return 0;
}
