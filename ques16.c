#include<stdio.h>
void main()
{
    int inp,count=0;
    printf("Enter the number:");
    scanf("%d",&inp);
    for(int b=2;b<inp;b++)
    {
        if (inp%b==0)
        {
            printf("%d is not a prime number...",inp);
            count++;
            break;
        }

    }

    if (count==0)
    {
        printf("%d is a prime number...",inp);
    }
   
}
