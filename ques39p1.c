/*39.	Write a program to print the given pattern 

*			
** 		     
***		      
****

*/
#include<stdio.h>

void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}