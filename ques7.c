#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the value of :-\nA:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);

    if (a>b & a>c)
    {
        printf("A is greatest..");
    }
    else if (b>c)
    {
        printf("B is greatest..");
    }
    else
    {
        printf("C is greatest..");
    }
}