#include <stdio.h>

int main() {

    float N1, N2, N3, N4, media;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    media = ((N1 * 2.0) + (N2 * 3.0) + (N3 * 4.0) + N4) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {

        printf("Aluno aprovado.\n");

    }

    else if (media >= 5.0 && media <= 6.9) {

        float exame, nota_final;

        printf("Aluno em exame.\n");

        scanf(" %f", &exame);

        printf("Nota do exame: %.1f\n", exame);
        
        nota_final = (media + exame) / 2;

        if (nota_final >= 5.0) {

            printf("Aluno aprovado.\n");
        }

        else {

            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", nota_final);
    }

    else {

        printf("Aluno reprovado.\n");
    }

    return 0;
}
