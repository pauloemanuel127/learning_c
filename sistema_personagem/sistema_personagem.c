#include "sistema_personagem.h"

Personagem make_char(char *name, Classes classe, Elementos type, int level, int hp) {
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
            printf("Tem magia do elemento: Agua\n");
            break;
        case TERRA:
            printf("Tem magia do elemento: Terra\n");
            break;
        case FOGO:
            printf("Tem magia do elemento: Fogo\n");
            break;
        case AR:
            printf("Tem magia do elemento: Ar\n");
            break;
    }

    printf("Atualmente está nivel: %d\n", character.nivel);
    printf("Possui %d de vida\n", character.vida);

    return;
}

Personagem* change_class(Personagem* character) {
    int escolha;

    printf("Escolha sua nova classe, digite:\n");
    printf("1 para Mago;\n2 para Guerreiro\n3 para Ladino\n4 para Arqueiro\n");

    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            character->classe = MAGO;
            break;
        case 2:
            character->classe = GUERREIRO;
            break;
        case 3:
            character->classe = LADINO;
            break;
        case 4:
            character->classe = ARQUEIRO;
            break;
    }

    return character;
}
