#include <stdio.h>
int main(void)
{
	int array1[100];
	int i,j,temp,n;
	
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d: ",i);
		scanf("%d",&array1[i]);
		printf("\n");
	}
	
	
	for(i=0;i<n;i++)
	{
	//	printf("i=%2d ",i); // just to understand the logic 
		for(j=0;j<n;j++) //what happens here is for the outer loop it checks a certain value like when i is eqaul to 0 it compares the other elements with the j loop
		{				// when i is 0 it checks if array1[0]>array1[0=j] and then array1[0]>array1[1=j] array1[0]>array1[2=j] array1[0]>array1[3=j] 
	//		printf("j=%2d ",j); // As we can understand from here is outer loop compares a specific value of the inner loop and changes their places if condition true
			if(array1[i]>array1[j]) 
			{
				temp=array1[i];
				array1[i]=array1[j];
				array1[j]=temp;
			}
		}
	}
	
	printf("\nDescending order of the array is: ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array1[i]);
	}
	
	
}