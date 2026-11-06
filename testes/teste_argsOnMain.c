#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("%d\n", argc);
    if(argc > 0) {
        for(int i = 0; i != argc; i++) {
            printf("%s \n", *(argv+i));
        }
    }
    return 0;
}
