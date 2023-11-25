#include<stdio.h>

void main()
{
    int a,sum=0;
    printf("Enter the limit..");
    scanf("%d",&a);

    for(int b=0;b<=a;b++)
    {
        sum+=b;
    }
    printf("sum is %d",sum);
}