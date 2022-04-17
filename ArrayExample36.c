#include <stdio.h>
int main(void)
{
	int i,j;
	int array[]={1,3,4,2,6,7,8};
	int ArraySum=0;
	
	printf("The given array is: ");
	
	for(i=0;i<sizeof(array)/4;i++)
	{
		printf("%2d",array[i]);
	}
	
	int arraysize;
	
	arraysize=sizeof(array)/4;
	
	ArraySum=((arraysize+1)*(arraysize+2))/2;

	
	int sum=0;
	
	for(i=0;i<arraysize;i++)
	{
		sum=sum+array[i];
	}
	
	int missingNum;
	
	missingNum=ArraySum-sum;
	
	printf("\nThe missing number is: %d",missingNum);
	
	
	
}