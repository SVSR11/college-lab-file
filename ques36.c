#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    char rev[100]; 
    printf("enter a string..");
    scanf("%s",str);
    int len=strlen(str);

    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    printf("\nreversed string is:- ");
    for(int k=0;k<len;k++)
    {
        printf("%c",rev[k]);
    }
    
}