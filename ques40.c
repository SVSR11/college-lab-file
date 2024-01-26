/*39.	Write a program to print the given pattern 

    *			
   *** 		     
  *****		      
   ***
    *

*/
#include<stdio.h>
void main()
{
    int k=1,m=2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" ");
        }
        for(int l=0;l<k;l++)
        {
            printf("*");
        }
        if(i<2)
        {
            m-=1;
            k+=2;
        }
        else
        {
            k-=2;
            m+=1;
        }
         printf("\n");
    }
}