#include<stdio.h>

void main()
{
    int a,even=0,odd=0;
    printf("Enter a value..");
    scanf("%d",&a);

    for(int b=1;b<=a;b++)
    {
        if(b%2==0)
        {
            even+=b;
        }
        else
        {
            odd+=b;
        }
    }
    printf("sum of even numbers is:  %d",even);
    printf("sum of odd numbers is:  %d",odd);
}