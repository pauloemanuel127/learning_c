#include <stdio.h>
#include <string.h>

int main(void) {
    //inicializando as variaveis
    char str1[50] = "";
    char str2[50] = "";
    int pos;

    //captando o input
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';
    scanf("%d", &pos);

    // inicializando a string final
    int tamanho = strlen(str1) + strlen(str2) + 1;
    char str3[tamanho];

    //organizando a string final da forma desejada
    int count = 0;
    int count2 = pos;
    for (int i = 0; i < pos; i++) {
        str3[i] = str1[i];
    }
    for (int i = pos; i < (strlen(str2) + pos); i++) {
        str3[i] = str2[count];
        count++;
    }
    for (int i = (strlen(str2) + pos); i < tamanho; i++) {
        str3[i] = str1[count2];
        count2++;
    }

    //exibindo o resultado
    printf("%s\n", str3);

    return 0;
}
