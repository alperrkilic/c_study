#include <stdio.h>
int main(void)
{
	int numbers1[25][25];
	int numbers2[25][25];
	int i,j,row1,column1,row2,column2;
	int flag=1;
	
	printf("Input rows and columns of the 1st matrix: ");
	scanf("%d %d",&row1,&column1);
	
	printf("\nInput rows and columns of the 2nd matrix: ");
	scanf("%d %d",&row2,&column2);
	
	printf("\nInput elements in the first matrix: \n");
	
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers1[i][j]);
			printf("\n");
		}
	}
	
	
	printf("\nInput elements in the second matrix: \n");
	
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
			printf("Element - [%d][%d]: ",i,j);
			scanf("%d",&numbers2[i][j]);
			printf("\n");
		}
	}
	
	printf("\nThe first matrix is: \n");
	
	for(i=0;i<row1;i++)
	{
		printf("\n");
		for(j=0;j<column1;j++)
		{
			printf("%d ",numbers1[i][j]);
		}
	}
	
		
	printf("\nThe second matrix is: \n");
	
	for(i=0;i<row2;i++)
	{
		printf("\n");
		for(j=0;j<column2;j++)
		{
			printf("%d ",numbers2[i][j]);
		}
	}
	
	if(row1==row2 && column1==column2)
	{
		printf("\nThe Matrices can be compared: \n");
		
		for(i=0;i<row1;i++)
		{
			for(j=0;j<column1;j++)
			{
				if(numbers1[i][j]!=numbers2[i][j])
				{
					flag=0;
					break;	
				}	
			}
		}
	}
	else
	{
		printf("\nThe matrices cannot be compared: \n");
	}
	
	if(flag==0)
	{
		printf("Two matrices are equal.\n\n");
	}
	else
	{
		printf("But, two matrices are not equal.\n\n");
	}
	
	return 0;
}