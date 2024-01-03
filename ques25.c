#include<stdio.h>

void bubble_sort(int arr[],int size)
{
    int temp;
    for(int i=size;i>=0;i--)
    {
        for(int j=0;j<i;j++ )
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array is...\n");
    for(int k=0;k<5;k++)
    {
        printf("%d ",arr[k]);
    }
}
void main()
{
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];

    printf("\nenter the values..");
    for(int i=0; i<size;i++)
    {
        scanf("%d ",&arr[i]);
    }
    
    bubble_sort(arr,size);

    
    
}