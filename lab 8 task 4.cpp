#include<stdio.h>
int main()
{
    int temp[4][4] = {
        {12,15,10,9},
        {11,8,12,13},
        {14,13,9,7},
        {16,11,10,8}
    };

    int i, j, cold;

    for(i = 0; i < 4; i++) {
        cold = temp[i][0];  // Pehle element ko assume karo row ka coldest
        for(j = 1; j < 4; j++) {
            if(temp[i][j] < cold) {
                cold = temp[i][j];  // Chhota value mila to update karo
            }
        }
        printf("Row %d coldest temperature = %d°C\n", i+1, cold);
    }

    return 0;
}

