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
    int size, sum=0;
	printf("enter the size of array..");
	scanf("%d",&size);
	
    int array[size];

	printf("enter array values..");
	for(int i=0; i<size;i++)
	{
		scanf("%d",&array[i]);
	}

    sum=addarray(array,size);
    printf("Sum of the elements of the array are: %d",sum);
    return 0;
}

