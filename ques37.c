/*37.	Write a program to compare the contents of two files and 
determine whether they are  the same or not.*/
#include<stdio.h>
#include<stdlib.h>


void write(char writestring[],char filename[])
{
        FILE* fptr;
        fptr= fopen(filename,"w");
        fputs(writestring,fptr);
        fclose(fptr);
}

void main()
{
        char f1text[100];
        printf("enter a string to write in file1\n");
        scanf("%s",f1text);

        char f2text[100];
        printf("enter a string to write in file2\n");
        scanf("%s",f2text);

        write(f1text,"file1.txt");
        write(f2text,"file2.txt");

        FILE* f1=fopen("file1.txt","r");           
        FILE* f2=fopen("file2.txt","r");           
        
        char c1,c2;

        while((c1=fgetc(f1))!=EOF && (c2=fgetc(f2))!=EOF)
        {
                if(c1!=c2)
                {
                        
                        printf("files not same...");
                        break;
                }
        }
        c2=fgetc(f2);
        if(c1==EOF && c2==EOF)
        {
                printf("files are same..");
        }

        fclose(f1);
        fclose(f2);
}