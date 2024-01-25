#include<stdio.h>

void display(int arr[], int size)
{
    for(int i=0; i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selection_sort(int arr[],int size)
{
    int minindex;
    for(int i=0; i<size;i++)
    {
        minindex=i;
        for(int j=i;j<size;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        if (minindex!=i)
        {
            swap(&arr[i],&arr[minindex]);
        }
    }
    display(arr,size);
}
    
    
void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    display(arr,n);
}  


void main()
{
    int size;
    printf("enter the size of the array.. ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("enter array elements...\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("sorted array using selection sort  ");
    selection_sort(arr,size);
    printf("\nsorted array using insertion sort  ");
    insertion_sort(arr,size);
    
}