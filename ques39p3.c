/*39.	Write a program to print the given pattern 

54321
 4321
  321
   21
    1

*/
#include<stdio.h>

void main()
{
    for(int i=5;i>0;i--)
    {
        for(int k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}