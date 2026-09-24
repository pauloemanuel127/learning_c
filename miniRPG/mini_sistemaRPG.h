#ifndef RPG_H
#define RPG_H

#include <string.h>
#include <stdio.h>

typedef enum {
    GUERREIRO,
    MAGO,
    LADINO,
    ARQUEIRO
} Classes;

typedef enum {
    AGUA,
    TERRA,
    FOGO,
    AR
} Elementos;

typedef struct {
    char nome [30];
    Classes classe;
    Elementos tipo;
    int nivel;
    int vida;
} Personagem;

Personagem make_char(char name[30], Classes classe, Elementos type, int level, int hp);

void view_char(Personagem character);

#endif
