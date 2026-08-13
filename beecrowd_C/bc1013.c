#include <stdio.h>
#include <math.h>

int main() {

    int nuns[3], maior1, maior2;

    scanf("%d %d %d", &nuns[0], &nuns[1], &nuns[2]);

    maior1 = (nuns[0] + nuns[1] + fabs(nuns[0] - nuns[1]))/2;
    maior2 = (maior1 + nuns[2] + fabs(maior1 - nuns[2]))/2;

    printf("%d eh o maior\n", maior2);

    return 0;
}