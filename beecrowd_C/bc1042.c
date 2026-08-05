#include <stdio.h>

int main() {

    int temp, n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int nums[3] = {n1, n2, n3};  

    for (int i = 0; i < 2 ; i++) {

        for (int j = 0; j < 2 - i; j++) {

            if (nums[j] > nums[j+1]) {

                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;

            }
        }
    }

    for (int i = 0; i < 3; i++) {

        printf("%d\n", nums[i]);
    }

    printf("\n%d\n%d\n%d\n", n1, n2, n3);

    return 0;
}