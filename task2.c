#include<stdio.h>
int main()
{
    int i=0,j=0,max=0,col,row;
    int matrix[3][4]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
	};

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
              if(max < matrix[i][j]){
              	max=matrix [i][j];
              	row =i;
              	col=j;
              }
               
               
             }
             
    }
     
     
  printf("\n The maximum value is  %d at index[%d][%d]",max,row,col);
    return 0;
}
