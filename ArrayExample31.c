#include <stdio.h>
int main(void)
{
	int numbers[25][25];
	int i,j,row,column;
	int flag=1;
	
	printf("Input number of Rows for the matrix: ");
	scanf("%d",&row);
	printf("\nInput number of Columns for the matrix: ");
	scanf("%d",&column);
	
	printf("\nInput elements in the first matrix: \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers[i][j]);
			printf("\n");
		}
	}
	
	printf("\nThe matrix is: \n");

	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%d ",numbers[i][j]);
		}
	}
	
	/*Explanation:

	Identity matrix is a square matrix with 1’s along the diagonal from upper left to lower right and 0’s in all other positions.
	If it satisfies the structure as explained before then the matrix is called as identity matrix.

	1 0 0	(0,0)  so i should be equal to the j and at these points it should print 1 
	0 1 0	(1,1)  for the other points it should print 0 
	0 0 1	(2,2)
	
	to control that we need to establish an if else condition
	so assigning a flag which is equal to 1 will check that.
	

	*/
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(i==j && numbers[i][j]!=1)
			{
				flag = -1;
				break;
			}
			else if(i!=j && numbers[i][j] !=0)
			{
				flag = -1;
				break;	
			}	
		}
	}
	
	if(flag==1)
	{
		printf("\n\nThe matrix is an identity matrix.\n\n");
	}
	else
	{
		printf("\n\nThe matrix is not an identity matrix.\n\n");
	}
	
}