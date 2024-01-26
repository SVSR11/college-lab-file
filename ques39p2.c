/*39.	Write a program to print the given pattern 

         A
        BA
       CBA
      DCBA
     EDCBA

*/
#include<stdio.h>

void main()
{
    char ch[]={'A','B','C','D','E'};

    for(int i=0;i<5;i++)
    {
        for(int k=4;k>i;k--)
        {
            printf(" ");
        }

        for(int j=i;j>=0;j--)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
}