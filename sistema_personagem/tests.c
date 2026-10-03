#include "sistema_personagem.h"

int main() {

    Personagem teste1 = make_char("Matheus", LADINO, AR, 10, 50);

    view_char(teste1);

    change_class(&teste1);

    view_char(teste1);

    return 0;
}
