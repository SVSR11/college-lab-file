
#include<stdio.h>

int binary_search(int array[],int size,int element)
{
    int low=0,high=size-1,mid;
    for(int i=0;i<size;i++)
    {
        mid=(low+high)/2;
        if (array[mid]==element)
        {
            printf("element fount at %d index",mid);
            return 0;
        }
        else
        {
            if (array[mid]>element)
            {
                high=mid;
            }
            else
            {
                low=mid;
            }
        }
    }
    return -1;
}
int binary_search(int array[],int size, int element);

int main()
{
    int size,element,result;
    printf("enter size of array..");
    scanf("%d",&size);

    int array[size];
    printf("enter array elements..\n");
    for (int i=0;i<size ; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("enter element to search..");
    scanf("%d",&element);

    result=binary_search(array,size,element);
    if (result!=0)
    {
        printf("the element could not be found..");
    }
    return 0;

}




