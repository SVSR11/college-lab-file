#include<stdio.h>
#include<string.h>

void concat()
{
    char string3[10]="hello ";
    char string4[10]="world";
    strcat(string3,string4);
    printf("\nconcatination  %s",string3);

}

void length(char string[10])
{
    printf("size of the entered string is.. %zu",strlen(string));
}

void stringcopy(char string1[10])
{
    char string2[10];
    strcpy(string2,string1);
    printf("\ncopied string:- %s",string2);
}

void main()
{
    char string1[10];
    printf("enter a string...");
    scanf("%s",string1);

    length(string1);
    stringcopy(string1);
    concat();
}

