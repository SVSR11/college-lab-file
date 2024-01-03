#include<stdio.h>

void display(int array3[],int size)
{
	for(int l=0;l<size;l++)
	{
		printf("%d  ",array3[l]);
	}
}
void main()
{
	int i,j,k,l,size, sum=0;
	printf("enter the size of both arrays..");
	scanf("%d",&size);
	int array1[size];
	int array2[size];
	int array3[size];
	
	//taking input of array 1 and 2
	printf("enter array 1 values..");
	for( i=0; i<size;i++)
	{
		scanf("%d",&array1[i]);
	}

	printf("enter array 2 values..");
	for( j=0; j<size;j++)
	{
		scanf("%d",&array2[j]);
	}
	
	
	//sum of coresponding elements in array 3
	for( k=0;k<size;k++)
	{
		sum=array1[k]+array2[k];
		array3[k]=sum;
	}
	
	//printing array 3
	printf("array 3 elements with the sum of coresponding elements of array1 and 2...\n");
	display(array3,size);
	
}
