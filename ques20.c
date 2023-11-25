#include<stdio.h>
#include<math.h>
void main()
{
    int count=0,a,b,num1,reverse1;
    
    printf("Enter a numaer:");
    scanf("%d",num1);

     a=num1;
        while(a!=0)
        {
            a/=10;
            count++;
        }

    
    for(int a=count;a>=1;a--)
    {
        
        reverse1+=pow(10,a)*(num1%10);
        num1/=10;
    }   
    printf("%d",reverse1);
}
