#include<stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=10,b=20;
    printf("value of a and b before swap..\na=%d\nb=%d",a,b);
    swap(&a,&b);
    printf("\nvalue of a and b after swap..\na=%d\nb=%d",a,b);
}