#include <stdio.h>
int main(void)
{
	
	int array[100];
	int position,i,value,n;
	
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	
	printf("\nEnter %d elements\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: ",i);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	printf("Enter the location where you wish to insert an element: ");
	scanf("%d",&position);
	
	printf("\nEnter the value to insert: ");
	scanf("%d",&value);
	
	for(i=n-1;i>=position-1;i--)
	{
		array[i+1]=array[i];
	}
	
	array[position-1]=value;
	
	printf("\nResultant array is: ");
	
	for(i=0;i<=n;i++)
	{
		printf("%d ",array[i]);
	}
	
}