#include <stdio.h>
#include <math.h>
int main(void)
{
	int array[50];
	int n;
	int i,j;
	int mindistance;
	int e1,e2;
	int temp1=99,temp2=190;
	
	printf("Please enter N, number of elements to store in the array: ");
	scanf("%d",&n);
	
	printf("\nEnter %d elements\n",n);
		
	for(i=0;i<n;i++)
	{	
			printf("Element-%d: ",i);
			scanf("%d",&array[i]);	
	}
	
	printf("\nEnter elements that you want to find distance between: ");
	scanf(" %d %d",&e1,&e2);
	
	mindistance=n-2;
	
		for(j=0;j<n;j++)
		{
			if(array[j]==e1)
			{
				temp1=j;
			}
			else if(array[j]==e2)
			{
				temp2=j;	
			}
			
			if(abs(temp2-temp1)<mindistance)
			{
				mindistance=abs(temp2-temp1);
			}	
		}
	
	
	printf("\nThe minimum distance between %d and %d is: %d",e1,e2,mindistance);
	
	
}