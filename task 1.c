#include<stdio.h>
int main()
{
    int i,j,n,mult;
    printf("Multiplication table (1-5)");
    printf("\nEnter the number : ");
        scanf("%d",&n);
    for(i=1;i<=n;i++){
    	printf("\n%d:",i);
        for(j=1;j<=5;j++){
            mult=i*j;
            printf("%4d",mult);
        }
        
    }
}