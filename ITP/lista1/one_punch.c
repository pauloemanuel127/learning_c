#include <stdio.h>

int main() {

    int quant, hType, mType;
    int venceram = 0;

    scanf("%d %d %d", &quant, &hType, &mType);

    if (quant >= 1) {

        switch (mType) {

            case 1:

                if (hType >= mType + 1) {

                    venceram = 1;
                
                }
                
                else if (quant >= 3 && hType == mType) {

                    venceram = 1;
                
                }

                break;
            
            case 2:
                
                if (hType >= mType + 1) {

                    venceram = 1;
                
                }
                
                else if (quant >= 3 && hType == mType) {

                    venceram = 1;
                
                }

                break;
            
            case 3:

                if (hType >= mType + 1) {

                    venceram = 1;
                
                }
                
                else if (quant >= 3 && hType == mType) {

                    venceram = 1;
                
                }

                break;
            
            case 4:
    
                if (hType >= mType + 1) {

                    venceram = 1;
                
                }
                
                else if (quant >= 3 && hType == mType) {

                    venceram = 1;
                
                }

                break;

            case 5:

                if (hType == 5) {
                    
                    venceram = 1;
                
                }
            
                break;

        }
    }

    if (venceram) {

        printf("Heróis vencerão!\n");

    }

    else {

        printf("Melhor chamar Saitama!\n");

    }

    return 0;
}