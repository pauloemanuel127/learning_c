#include <stdio.h>
#include <math.h>

double calc_med(int arr[10], int type);
double calc_mederr(double med1, double med2, int type);

int main(void) {

    int nums[10];

    for (int i = 0; i < 10; i++) {

        scanf("%d", &nums[i]);
    }

    double arit_med = calc_med(nums, 0);
    double geo_med = calc_med(nums, 1);
    double harm_med = calc_med(nums, 2);

    double harm_err = ();
    double geo_err = ();

}

double calc_med(int arr[10], int type){

    double ret = if (type == 2) 10 else 0;
    double aux;

    for (int i = 0; i < 10; i++){
        
        if (type == 2){
            aux += (1 / arr[i]);
        }
        else ret += arr[i];
    }

    switch (type){

        case 0: //ARITHMETRIC

            ret = ret/10;
            break;

        case 1: //GEOMETRIC

            ret = pow(ret, 0.1);
            break;
        
        case 2: //HARMONIC
            
            ret /= aux;
            break;

    }

    return ret;

}

double calc_mederr(double med1, double med2, int type) {

    
}