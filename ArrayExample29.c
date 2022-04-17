#include <stdio.h>
int main(void)
{
	int numbers[10][10];
	int i,j,row,column;
	int counter=0;
	
	printf("Input the number of rows of the matrix: ");
	scanf("%d",&row);
	
	printf("\nInput the number of olumns of the matrix: ");
	scanf("%d",&column);
	
	printf("\nInput elements in the first matrix: \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers[i][j]);
			printf("\n");
			
			if(numbers[i][j]==0)
			{
				counter++;
			}
		}
	}
	
	if(counter>((row*column)/2))
	{
		printf("\nThe given matrix is sparse matrix.\n");
	}
	else
	{
		printf("\nThe given matrix is not a sparse matrix.\n");
	}
	
	printf("\nThere are %d number of zeros in the matrix.\n\n",counter);
	
	
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%d ",numbers[i][j]);	
		}
	}
}