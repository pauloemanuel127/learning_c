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
