#include <stdio.h>

int main() {
    int i, j, k;
    char alph[] = {'A','B','C','D','E','F','G','H'};

    for (i = 0; i < 5; i++) {

        
        for (j = i; j < 5; j++)
            printf(" ");
        for (k = 0; k < (2*i + 1); k++)
            printf("*");

        printf("       "); 

        
        for (j = i; j < 5; j++)
            printf(" ");
        for (k = 0; k < (2*i + 1); k++)
            printf("%d", k + 1);

        printf("       "); 

       
        for (j = i; j < 5; j++)
            printf(" ");
        for (k = 0; k < (2*i + 1); k++)
            printf("%c", alph[k]);

        printf("\n");
    }

    return 0;
}


