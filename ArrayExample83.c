#include <stdio.h>
int main(void)
{
	int array[]={1,15,39,75,92};
	int i,j,n;
	int difference;
	int temp1,temp2;
	int flag=0;
	
	printf("Please enter N,number of elements to store in the array: ");
	scanf("%d",&n);
	
	printf("\nPlease enter %d elements",n);
	
	for(i=0;i<n;i++)
	{
			printf("\nElement-%d: ",i);
			scanf("%d",&array[i]);
	}
	
	printf("\nPlease enter the difference: ");
	scanf("%d",&difference);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(array[i]-array[j]==difference)
			{
				temp1=i;
				temp2=j;
				flag=1;
			}
		}
		
		if(flag==1)
		{
			printf("\nThe pair is: (%d,%d)",array[temp1],array[temp2]);
		}
		flag=0;	
	}
	
}