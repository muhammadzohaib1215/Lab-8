#include<stdio.h>
int main()
{
    int temp[4][4]={{12,15,10,9},{11,8,12,13},{14,13,9,7},{16,11,10,8}};
    int i,j,cold=0;

  

    for(i=0; i<4; i++){
    	cold=temp[i][0];
        for(j=0; j<4; j++){
            if(temp[i][j] < cold){
                cold = temp[i][j];
                
            }
        }
        printf(" Cold spot found: at position (%d,%d) with temperature %d C\n", i+1, j+1, cold);
    }

    printf("\n The coldest temperature in the matrix = %d C\n", cold);

    return 0;
}

