#include <stdio.h>

int main(void) {

    int arr1[5] = {};
    int arr2[5] = {};

    for (int i = 0; i < 5; i++) { //iterador de scan
        scanf("%d", arr1+i);
    }
    for (int i = 0; i < 5; i++) { //iterador de scan
        scanf("%d", arr2+i);
    }

    for (int i = 0; i < 5; i ++) { //iterador de soma
        printf("%d ", arr1[i] + arr2[i]);
    }

    printf("\n");

    return 0;
}
