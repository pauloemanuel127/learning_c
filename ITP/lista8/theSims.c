#include <stdio.h>
#include <string.h>

int simula_sims(int *fome, int *sede, int *banheiro, int *sono, int *tedio);

void imprime_relatorio(int fome, int sede, int banheiro, int sono, int tedio);

int main(){
    int fome, sede, banheiro, sono, tedio;
    int acoes;
    scanf("%d %d %d %d %d", &fome, &sede, &banheiro, &sono, &tedio);
    scanf("%d", &acoes);
    getchar();
    for(int i = 0; i<acoes; i++){
        int ret = simula_sims(&fome, &sede, &banheiro, &sono, &tedio);
        if(ret == 0) break;
    }
    imprime_relatorio(fome, sede, banheiro, sono, tedio);
    return 0;
}

int simula_sims(int *fome, int *sede, int *banheiro, int *sono, int *tedio) { //recebe as variaveis por referencia e usa os ponteiros para fazer as alterações de valor
    char input[17];

    fgets(input, 17, stdin);
    input[strlen(input) - 1] = '\0';

    if(!strcmp(input, "comer")) {
        *fome += 30;
        *banheiro -= 15;
        *sono -= 5;
        *tedio -= 5;
        *sede -= 5;
    }
    else if(!strcmp(input, "beber")) {
        *sede += 30;
        *banheiro -= 20;
        *fome -= 5;
        *sono -= 5;
        *tedio -= 5;
    }
    else if(!strcmp(input, "dormir")) {
        *sono += 80;
        *tedio += 30;
        *banheiro -= 30;
        *sede -= 30;
        *fome -= 30;
    }
    else if(!strcmp(input, "se aliviar")) {
        *banheiro = 100;
        *sede -= 5;
        *fome -= 5;
        *sono -= 5;
        *tedio -= 5;
    }
    else if(!strcmp(input, "jogar videogame")) {
        *tedio += 80;
        *sono -= 20;
        *banheiro -= 20;
        *sede -= 20;
        *fome -= 20;
    }

    if(*fome > 100) *fome = 100;
    if(*sede > 100) *sede = 100;
    if(*banheiro > 100) *banheiro = 100;
    if(*sono > 100) *sono = 100;
    if(*tedio > 100) *tedio = 100;

    if(*fome < 0) *fome = 0;
    if(*sede < 0) *sede = 0;
    if(*banheiro < 0) *banheiro = 0;
    if(*sono < 0) *sono = 0;
    if(*tedio < 0) *tedio = 0;

    if(*fome == 0) {
        printf("Game Over! Morreu de fome\n");
        return 0;
    }
    if(*sede == 0){
        printf("Game Over! Morreu de sede\n");
        return 0;
    }
    if(*banheiro == 0) {
        printf("Game Over! Morreu apertado...\n");
        return 0;
    }
    if(*sono == 0){
        printf("Game Over! Morreu dormindo...\n");
        return 0;
    }
    if(*tedio == 0){
        printf("Game Over! Morreu deprimido...\n");
        return 0;
    }

    if(*fome > 0 && *fome <= 15) {
        printf("Alerta: fome está com valor baixo\n");
    }
    if(*sede > 0 && *sede <= 15){
        printf("Alerta: sede está com valor baixo\n");
    }
    if(*banheiro > 0 && *banheiro <= 15) {
        printf("Alerta: banheiro está com valor baixo\n");
    }
    if(*sono > 0 && *sono <= 15){
        printf("Alerta: sono está com valor baixo\n");
    }
    if(*tedio > 0 && *tedio <= 15){
        printf("Alerta: tédio está com valor baixo\n");
    }

    return 1;
}

void imprime_relatorio(int fome, int sede, int banheiro, int sono, int tedio) {
    printf("Status final:\n");
    printf("Fome: %d\nSede: %d\nBanheiro: %d\nSono: %d\nTédio: %d\n", fome, sede, banheiro, sono, tedio);
}
