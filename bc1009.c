#include <stdio.h>

char name[20];
double salary;
double sells;
double bonus;
double total;

int main () {

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sells);

    bonus = (sells * 15)/100;

    total = salary + bonus;

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}