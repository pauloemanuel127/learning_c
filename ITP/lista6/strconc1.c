#include <stdio.h>
#include <string.h>

int main(void) {
    //inicialização das variaveis e entrada dos dados
    char str1[50];
    char str2[50];
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);

    //definição to tamanho da string 3
    int len1 = strlen(str1) - 1;
    int len2 = strlen(str2) - 1;
    int total = len1 + len2;
    char str3[total + 1];

    //iteração da string 3
    for (int i = 0; i < len1; i++) {
        str3[i] = str1[i];
    }
    int indice = 0; //indice de apoio
    for (int i = len1; i < total; i++) {
        str3[i] = str2[indice];
        indice++;
    }
    str3[total] = '\0'; // \0 pra definir o fim de string

    printf("%s\n", str3);

    return 0;
}
