#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int leds = 0;
        char V[102];

        scanf("%s", &V);

        for (int j = 0; V[j] != '\0'; j++) {

            if (V[j] == '1') {
                
                leds += 2;
            }

            else if (V[j] == '2' || V[j] == '3' || V[j] == '5') {

                leds += 5;
            }

            else if (V[j] == '4') {

                leds += 4;
            }

            else if (V[j] == '6' || V[j] == '9' || V[j] == '0') {

                leds += 6;
            }

            else if (V[j] == '7') {

                leds += 3;
            }

            else if (V[j] == '8') {

                leds += 7;
            }
        }
        
        printf("%d leds\n", leds);
    }
}