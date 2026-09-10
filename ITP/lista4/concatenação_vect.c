#include <stdio.h>

int main(void) {
    int t1, t2;

    scanf("%d", &t1);
    int vec1[t1] = {};
    for (int i = 0; i < t1; i++) { //iteração do primeiro array
        scanf("%d", vec1 + i);
    }

    scanf("%d", &t2);
    int vec2[t2] = {};
    for (int i = 0; i < t2; i++) { //iteração do segundo array
        scanf("%d", vec2 + i);
    }

    int vec3[t1 + t2];

    for (int i = 0; i < t1; i++) { //iterações da concatenação
        vec3[i] = vec1[i];
    }
    for (int i = 0; i < t2; i++) {
        vec3[t1 + i] = vec2[i];
    }

    for (int i = 0; i < t1 + t2; i++) { //print
        printf("%d ", vec3[i]);
    }

    printf("\n");

    return 0;
}
