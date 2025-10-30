#include<stdio.h>
int main()
{
    char class1[5][5]={{'x','o','x','o','x'},{'o','x','o','x','o'},{'x','o','x','o','x'},{'o','x','o','x','o'},{'x','o','x','o','x'}};
	int i,j,seated=0,empty=0,total=0;

	printf("Classroom seating chart : ");
	printf("\n=========================");
	printf("\n(x=student) , (o=empty)\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Row : %d :",i+1);
		for(j=0;j<5;j++)
		{
				if(class1[i][j]=='x')
				{
				seated++;
			}
			else if(class1[i][j]=='o')
			{
				empty++;
			}
			printf("%4c",class1[i][j]);
			
			total++;
		}
		printf("\n");
	}
	
	printf("\n Summary : \n");
	printf(" Student seated : %d\n",seated);
	printf(" Empty desks : %d\n",empty);
	printf(" Total desks : %d",total);
	
	return 0;
}
