#include<stdio.h>

int addarray(int arr[],int size)
{
    int sum=0,j;
	for(j=0;j<size;j++)

	 {
		sum+=arr[j];
	 }
	
	return sum;
}
int main()
{
    int i,j,size, sum=0;
	printf("enter the size of array..");
	scanf("%d",&size);
	int array1[size];
	
	printf("enter array values..");
	for( i=0; i<size;i++)
	{
		scanf("%d",&array1[i]);
	}
	
    sum=addarray(array1,size);
    printf("Sum of the elements of the array are: %d",sum);
    return 0;
}

