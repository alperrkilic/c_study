#include <stdio.h>
void function(int array[],int *p1,int *p2);
int main(void)
{
	int array[30];
	int i,j;
	
	int n;
	
	printf("Please enter number of elements N to store(N<=30): ");
	scanf("%d",&n);
	
	if(n>30)
	{
		while(n>30)
		{
			printf("You have entered a wrong number, please enter N<=30: ");
			scanf("%d",&n);
		}
	}
	
	
	for(i=0;i<n;i++)
	{
			printf("\nElement-[%d]: ",i);
			scanf("%d",&array[i]);
	}
	
	
	printf("\nThe given array is: ");
	
	for(i=0;i<n;i++)
	{	
			printf("%d ",array[i]);	
	}
	
	int MaxSum=0;
	function(array,&n,&MaxSum);
	
	printf("\nThe largest sum of contiguous subarray is: %d",MaxSum);
	

	
}
void function(int array[],int *p1,int *p2)
{
	int i,j,k;
	int sum;
	int maxSum=0;
	
	for(i=0;i<*p1;i++)
	{
		for(j=i;j<*p1;j++)
		{
			sum=0;
			for(k=i;k<j;k++)
			{
				sum=sum+array[k];
			}
			if(sum>maxSum)
			{
				maxSum=sum;
			}
		}
	}
	
	*p2=maxSum;
	
}