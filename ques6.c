#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter the value of :-\nA:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);

    if (a==b)
    {
        printf("A and B are equal..");
    }
    else{
        printf("A and B are not equal..");
    }
}