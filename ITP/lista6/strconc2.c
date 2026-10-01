#include <stdio.h>
#include <string.h>

int main(void) {
    //inicialização das variaveis
    int num;
    char str1[1000] =  "";
    char str2[1000] = "";

    //loop para a formação da frase concatenada
    while (1) {
        scanf("%d", &num);
        getchar(); //getchar() pra remover o lixo no buffer de entrada

        if (num == 0) {
            fgets(str2, 1000, stdin);
            //removendo o '\n' do fim das frases
            int indice = strlen(str2);
            str2[indice - 1] = '\0';
            //concatenando a nova string com as anteriores e salvando na variavel final
            strcat(str2, str1);
            strcpy(str1, str2);
        }
        else if (num == 1) {
            fgets(str2, 1000, stdin);
            //removendo o '\n1 no fim das frases
            int indice = strlen(str2);
            str2[indice - 1] = '\0';
            //concatenando a nova string, já na string base
            strcat(str1, str2);
        }
        else if (num == -1) {
            //saindo do loop
            break;
        }
    }

    printf("%s\n", str1);

    return 0;
}
