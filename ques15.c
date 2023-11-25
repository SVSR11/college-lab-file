#include<stdio.h>
void main()
{
    int a=0,b=1,c,inp;
    printf("Enter the limit:");
    scanf("%d",inp);

    for(;b<=inp;)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
    }
   
}
