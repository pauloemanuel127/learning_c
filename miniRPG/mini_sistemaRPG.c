#include "mini_sistemaRPG.h"

Personagem make_char(char name[30], Classes classe, Elementos type, int level, int hp) {
    Personagem x;

    strcpy(x.nome, name);
    x.classe = classe;
    x.tipo = type;
    x.nivel = level;
    x.vida = hp;

    return x;
}

void view_char(Personagem character) {
    printf("Personagem: %s\n", character.nome);

    switch (character.classe) {
        case GUERREIRO:
            printf("Classe: Guerreiro\n");
            break;
        case MAGO:
            printf("Classe: Mago\n");
            break;
        case LADINO:
            printf("Classe: Ladino\n");
            break;
        case ARQUEIRO:
            printf("Classe: Arqueiro\n");
            break;
    }

    switch (character.tipo) {
        case AGUA:
            printf("Elemento: Água\n");
            break;
        case TERRA:
            printf("Elemento: Terra\n");
            break;
        case FOGO:
            printf("Elemento: Fogo\n");
            break;
        case AR:
            printf("Elemento: Ar\n");
            break;
    }

    printf("Está com %d de vida\n", character.vida);
    printf("Nível: %d\n", character.nivel);

    return;
}
