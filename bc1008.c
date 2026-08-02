#include <stdio.h>

int number;
int hours;
double value;
double salary;

int main () {

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%lf", &value);

    salary = hours * value;
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}