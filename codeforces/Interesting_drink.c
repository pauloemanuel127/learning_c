#include <stdio.h>

int main(void) {

    int stores;

    scanf("%d", &stores);

    int prices[stores];
    int temp;

    for (int i = 0; i < stores; i++) {
        scanf("%d", prices+i);
    }

    for (int i = 0; i < stores; i++) {
        for (int j = 0; j < stores - i - 1; j++) {
            if (prices[j] > prices [j+1]) {
                temp = prices[j];
                prices[j] = prices[j+1];
                prices[j+1] = temp;
            }
        }
    }
    int days;

    scanf("%d", &days);

    int money;



    for (int i = 0; i < days; i++) {
        scanf("%d", &money);

        int low = 0;
        int high = stores - 1;
        int total = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (prices[mid] <= money) {
                total = mid + 1;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }

        }
        printf("%d\n", total);
    }

    return 0;
}
