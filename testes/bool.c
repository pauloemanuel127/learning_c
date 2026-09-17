#include <stdio.h>
#include "bool.h"

void print_bool(boolean variable) {
    if(variable) {
        printf("true");
        return;
    }
    printf("false");
    return;
}
