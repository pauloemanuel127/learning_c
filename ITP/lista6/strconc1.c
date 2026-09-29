#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50];
    char str2[50];
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);

    int total = (strlen(str1) - 1) + (strlen(str2) - 1);
    char str3[total];

    for (int i = 0; i < strlen(str1) - 1; i++) {
        str3[i] = str1[i];
    }
    int indice = 0;
    for (int i = strlen(str1) - 1; i < total; i++) {
        str3[i] = str2[indice];
        indice++;
    }
    str3[total] = '\0';

    printf("%s\n", str3);

    return 0;
}
