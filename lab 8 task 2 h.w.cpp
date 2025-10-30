#include<stdio.h>
int main()
{
	int original[4][4]={{1,0,1,0},{0,1,0,1},{1,1,0,0},{0,0,1,1}};
    
	int i,j,inverted;
	
	printf("Original Matrix\t\t\tInverted Matrix\n");
	printf("---------------\t\t\t---------------\n");

	for(i = 0; i < 4; i++) {
	    for(j = 0; j < 4; j++) {
	        printf("%4d", original[i][j]);
	    }

	    printf("\t\t");

	    for(j = 0; j < 4; j++) {
	        inverted = 1 - original[i][j];
	        printf("%4d", inverted);
	    }

	    printf("\n");
	}

	return 0;
}

