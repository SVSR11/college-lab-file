#include<stdio.h>
struct student
{
    char name[10];
    int marks;
    int roll_no;
};
int main()
{
   struct student d[3]; 
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("enter record of student %d  \n",i+1);
        
        printf("student name ");
        scanf("%s",d[i].name);

        printf("\nstudent marks ");
        scanf("%d",&d[i].marks);

        
        printf("\nstudent roll no ");
        scanf("%d",&d[i].roll_no);
    }
    printf("Name\t\tRoll no\t\t\tClass\t\t\t\tMarks\n");
    for (i=0; i<3; i++)
    {
        printf("%s\t\t%d\t\t\t%d\t\t",d[i].name, d[i].roll_no, d[i].marks);
    }
    return 0;

}