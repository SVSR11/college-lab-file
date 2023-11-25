#include<stdio.h>
#include<math.h>
void main()
{
    int count=-1,a,b,num1,reverse1=0,digit,power=1;
    
    printf("Enter a numaer:");
    scanf("%d",&num1);

     a=num1;
        while(a!=0)
        {
            a/=10;
            count++;
        }
    
    for(int a=count;a>=0;a--)
    {

        b=a;
        while(b!=0)
        {
            power*=10;
            b--;
        }
        
        digit=(num1%10);
        reverse1+=(power*digit);
        num1/=10;
        power=1;
       
    }   
    printf("The reverse is:%d",reverse1);
}
