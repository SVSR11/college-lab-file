#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20,c;
    
    printf("values before swap:-\na=%d\nb=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nvalues after swap:-\na=%d\nb=%d",a,b);
}