#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,count=0,num,b;

    for(int a=1;a<=1000;a++)
    {
        //check the length of the number
        b=a;
        while(b!=0)
        {
            b/=10;
            count++;
        }
        //printf("%d\n",count);
        //check if armstrong or not
        num=a;
        while(num!=0)
        {
            sum=sum+pow(num%10,count);
            num/=10;
        }

        //printf("%d",sum);
        if (sum==a)
        {
        printf("%d",a);
        }
        sum=0;
        count=0;
        
    }
    return 0;
       
}
