#include<stdio.h>
#include<math.h>
void main()
{
    int inp,binary,decimal,a,b,count=0,sum=0;
    
    printf("Enter\n1 for binary to decimal \n2 for decimal to binary\n ");
    scanf("%d",&inp);
    
    if (inp==1)
    {
        printf("Enter a binary value:");
        scanf("%d",&binary);
        
        b=binary;
        while(b!=0)
        {
            b/=10;
            count++;
        }


        a=binary;
        for(int i=0;i<count; i++)
            {
                sum+=(a%10)*(pow(2,i));
                a/=10;
                //printf("%d\n",i);
            }
    printf("decimal value:%d",sum);
    }

    else if (inp==2)
    {
        printf("Enter a decimal value:");
        scanf("%d",&decimal);




    }
    else
    {

    }

}