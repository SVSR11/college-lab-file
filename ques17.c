#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num%10!=0)
    {
        sum+=num%10;
        num/=10;
    } 
    printf("Sum of the digits is:%d ",sum);
}
