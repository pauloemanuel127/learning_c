#include <stdio.h>
#include <math.h>

int main(void) {

    int input;
    double arit_med = 0, geo_med = 1, harm_med = 0;
    double err_med, geo_err, harm_err;

    for (int i = 0; i < 10; i++) {
    
        scanf("%d", &input);
        arit_med += input;
        geo_med *= input;
        harm_med += 1/(double)input; //double para gerar um valor decimal

    }

    arit_med = arit_med/10;
    geo_med = pow(geo_med, 0.1);
    harm_med = 10/harm_med;

    geo_err = (geo_med - arit_med)/arit_med;
    harm_err = (harm_med - arit_med)/arit_med;
    err_med = ((geo_err + harm_err)/2)*100;

    printf("Média aritmética é %.2f\n", arit_med);
    printf("Média harmônica é %.2f\n", harm_med);
    printf("Média geométrica é %.2f\n", geo_med);
    printf("Erro médio é %.2f %\n ", err_med); 

    return 0;
}