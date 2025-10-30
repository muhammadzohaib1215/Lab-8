#include<stdio.h>
int main()
{
    int original[4][4] = {
        {1,0,1,0},
        {0,1,0,1},
        {1,1,0,0},
        {0,0,1,1}
    };
    
    int i, j, inverted;
    int whitecount = 0, blackcount = 0;
    
    printf("  Original Matrix  \t\t  Inverted Matrix\n");
    
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", original[i][j]);
            if(original[i][j] == 1)
                whitecount++;
            else
                blackcount++;
        }
        
        printf("\t\t");  
        
        
        for(j = 0; j < 4; j++) {
            inverted = 1 - original[i][j];
            printf("%4d", inverted);
        }
        printf("\n");
    }
    
    
    printf("\n Number of white pixels : %d", whitecount);
    printf("\n Number of black pixels : %d\n", blackcount);
    
    return 0;
}

