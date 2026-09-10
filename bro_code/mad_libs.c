#include <stdio.h>
#include <string.h>

int main(void) {

    char subs[50] = "";
    char verb[50] = "";
    char adjetivo1[50] = "";
    char adjetivo2[50] = "";
    char adjetivo3[50] = "";

    printf("Escreva um adjetivo (descrição): ");
    fgets(adjetivo1, sizeof(adjetivo1), stdin);
    adjetivo1[strlen(adjetivo1) - 1] = '\0';

    printf("Escreva um substantivo (nome, animal): ");
    fgets(subs, sizeof(subs), stdin);
    subs[strlen(subs) - 1] = '\0';

    printf("Escreva um adjetivo (descrição): ");
    fgets(adjetivo2, sizeof(adjetivo2), stdin);
    adjetivo2[strlen(adjetivo2) - 1] = '\0';

    printf("Escreva um verbo (terminado em ando): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Escreva um adjetivo (descrição): ");
    fgets(adjetivo3, sizeof(adjetivo3), stdin);
    adjetivo3[strlen(adjetivo3) - 1] = '\0';

    printf("\nHoje fui a um zoologico %s.\n", adjetivo1);
    printf("Numa exibição, eu vi um %s.\n", subs);
    printf("%s era %s estava %s!\n", subs, adjetivo2, verb);
    printf("Eu estava %s!\n", adjetivo3);

    return 0;
}
