#include<stdio.h>

int max(int arr1[],int size)
{
    int maxvalue=arr1[0];

    for(int i=1 ; i<size;i++)
    {
        if (arr1[i]>maxvalue)
        {
            maxvalue=arr1[i];
        }
    }
    return maxvalue;
}

int min(int arr1[],int size)
{
      int minvalue=arr1[0];

    for(int i=1 ; i<size;i++)
    {
        if (arr1[i]<minvalue)
        {
            minvalue=arr1[i];
        }
    }
    return minvalue;
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
        scanf("%d",&arr[i]);
    }
    int maxval,minval;
    maxval=max(arr,size); 
    minval=min(arr,size);

    printf("max value:- %d \nmin value:- %d",maxval,minval);
}