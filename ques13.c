#include<stdio.h>

void main()
{
    int a,fac=1;
    printf("Enter a value..");
    scanf("%d",&a);

    for(int b=1;b<=a;b++)
    {
        fac*=b;
    }
    printf("%d! is equal to: %d",a,fac);
}