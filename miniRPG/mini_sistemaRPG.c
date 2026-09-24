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
    printf("O personagem %s, tem as seguintes carateristicas:\n", character.nome);

    switch (character.classe) {
        case GUERREIRO:
            printf("classe: Guerreiro\n");
            break;
        case MAGO:
            printf("classe: Mago\n");
            break;
        case LADINO:
            printf("classe: Ladino\n");
            break;
        case ARQUEIRO:
            printf("classe: Arqueiro\n");
            break;
    }

    switch (character.tipo) {
        case AGUA:
            printf("tem magia do elemento: Agua\n");
            break;
        case TERRA:
            printf("tem magia do elemento: Terra\n");
            break;
        case FOGO:
            printf("tem magia do elemento: Fogo\n");
            break;
        case AR:
            printf("tem magia do elemento: Ar\n");
            break;
    }

    printf("Atualmente está nivel: %d\n", character.nivel);
    printf("possui %d de vida\n", character.vida);

    return;
}
