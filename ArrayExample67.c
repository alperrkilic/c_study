#include <stdio.h>
int main(void)
{
	int array[5][5];
	int column;
	int row;
	int i,j,flag=0;
	
	printf("Input number of columns of the matrix: ");
	scanf("%d",&column);
	
	printf("\nInput number of rows of the matrix: ",row);
	scanf("%d",&row);
	
	printf("\nPlease enter the elements of the matrix: ");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%3d",array[i][j]);
		}
	}
	
	int search;
	
	printf("\nPlease enter the value to search: ");
	scanf("%d",&search);
	
	int temp1,temp2;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			flag=0;
			if(array[i][j]==search)
			{
				temp1=i;
				temp2=j;
				flag=1;
			}
			if(flag==1)
			{
				printf("\nThe element found at the position in the matrix is: %d,%d",temp1,temp2);
			}
		}
	}
	
	
}