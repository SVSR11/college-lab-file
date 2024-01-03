#include<stdio.h>

void linear_search(int arr[],int size, int inp)
{
    int count=0;
    for(int i=0;i<size;i++)
        {
            if (arr[i]==inp)
            {
                printf("value exists at index %d",i);
                count++;
            }
        }
        if (count==0)
        {
            printf("value could not be found");
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
        scanf("%d",&arr[i]);
    }
    int inp;
    
    printf("enter a value to search");
    scanf("%d",&inp);

    linear_search(arr,size,inp);

    
}