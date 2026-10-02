#include <stdio.h>
#include <string.h>

int main(void) {
    //inicializando as strings
    char str1[50] = "";
    char str2[50] = "";

    //receptando a entrada e removendo o \n
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';

    //verificação se é substring por meio da função strstr() que retorna o endereço de memoria onde a substring aparece
    if (strstr(str1, str2) != NULL) {
        printf("É substring");
    }
    else {
        printf("Não é substring");
    }

    return 0;
}
