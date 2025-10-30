#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;
    int num[9] = {1,2,3,4,5,6,7,8,9};
    char alph[8] = {'A','B','C','D','E','F','G','H'};

   
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    

   
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (k = 0; k < (2 * i - 1); k++) {
            printf("%d", num[k]);
        }
        printf("\n");
    }

    
    
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (k = 0; k < (2 * i - 1) && k < 8; k++) {
            printf("%c", alph[k]);
        }
        printf("\n");
    }

    return 0;
}



