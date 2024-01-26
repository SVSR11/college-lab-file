/*32.	Define a structure data type name STUDENT. 
The type contains student id: string type, student name: type string, 
student age:type integer, total marks: float type. 
Display all the record of the student.*/
#include<stdio.h>
struct student
{
    char name[10];
    int class1;
    int marks;
    int roll_no;
};

void entries(int n)
{
    struct student d[n]; 
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter record of student %d  \n",i+1);
        printf("student name ");
        scanf("%s",d[i].name);

        printf("class ");
        scanf("%d",&d[i].class1);

        
        printf("\nstudent roll no ");
        scanf("%d",&d[i].roll_no);
        
        printf("\nstudent marks ");
        scanf("%d",&d[i].marks);
    }
}

void displaydata(int n)
{
    struct student d[n];
    printf("Name\t\tRoll no\t\t\tClass\t\tMarks\n");
    for (int i=0; i<n; i++)
    {
        printf("%s\t\t%d\t\t\t%d\t\t%d\t\t",d[i].name, d[i].class1, d[i].roll_no, d[i].marks);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter the no. of entries..");
    scanf("%d",&n);

    entries(n);
    displaydata(n);

    
    return 0;

}