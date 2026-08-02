#include <stdio.h>

double A, B, media;

int main() {

    scanf("%lf", &A);
    scanf("%lf", &B);
    media = ((A * 3.5) + (B * 7.5)) / 11.0;

    printf("MEDIA = %.5f\n", media);

    return 0;
}
