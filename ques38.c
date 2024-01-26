/*38.	Write a program to check whether a given word exists in a file or not. 
If yes then find the number of times it occurs.*/
#include<stdio.h>
#include<stdlib.h>


void write()
{
        char ftext[100];
        printf("enter a string to write in file\n");
        scanf("%s",ftext);

        FILE* fptr;
        fptr= fopen("file.txt","w");
        fputs(ftext,fptr);
        fclose(fptr);
}

void main()
{
        
        write();
        char ch;
        printf("enter a character to search.:-");
        scanf("%c",ch);

        FILE* f1=fopen("file1.txt","r");            
        char c1;
        int count=0;
        if((c1=fgetc(f1))==ch)
        {
                count++;
        }
        if(count!=0)
        {
            printf("%c appears %d times in the file..",ch,count);
        }

        fclose(f1);
        
}