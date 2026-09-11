#include <stdio.h>

void print_arr(int arr1[], double arr2[], int tam); //função que exibe o conteudo do array formatado

int main(void) {
    int alunos = 0;
    scanf("%d", &alunos);

    int numero = 0;
    double nota = 0;

    double notas_app[alunos] = {};
    int numero_app[alunos] = {};
    int cont_app = 0;

    double notas_rec[alunos] = {};
    int numero_rec[alunos] = {};
    int cont_rec = 0;

    double notas_rep[alunos] = {};
    int numero_rep[alunos] = {};
    int cont_rep = 0;

    for (int i = 0; i < alunos; i++) { //iterador das notas para organizar em arrays
        scanf("%d - %lf", &numero, &nota);

        if (nota >= 7.0) {
            notas_app[cont_app] = nota;
            numero_app[cont_app] = numero;
            cont_app += 1;
        }
        else if (nota >= 5.0) {
            notas_rec[cont_rec] = nota;
            numero_rec[cont_rec] = numero;
            cont_rec += 1;
        }
        else {
            notas_rep[cont_rep] = nota;
            numero_rep[cont_rep] = numero;
            cont_rep += 1;
        }
    }

    printf("Aprovados: ");
    print_arr(numero_app, notas_app, cont_app);
    printf("Recuperação: ");
    print_arr(numero_rec, notas_rec, cont_rec);
    printf("Reprovados: ");
    print_arr(numero_rep, notas_rep, cont_rep);

    return 0;

}

void print_arr(int arr1[], double arr2[], int tam) {
    for (int i = 0; i < tam - 1; i++) { //iterador da formatação
        printf("%d (%.1f), ", arr1[i], arr2[i]);
    }
    printf("%d (%.1f)\n", arr1[tam-1], arr2[tam-1]);

}
