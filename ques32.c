/*32.	Define a structure data type name STUDENT. 
The type contains student id: string type, student name: type string,
student age:type integer, total marks: float type. Display all the record of the student.*/
#include<stdio.h>
struct student
{
    char name[10];
    int class1;
    int marks;
    int roll_no;
};

int main()
{
    struct student d; 
    
    printf("enter record of student  \n");
    printf("student name ");
    scanf("%s",d.name);

    printf("class ");
    scanf("%d",&d.class1);

    
    printf("\nstudent roll no ");
    scanf("%d",&d.roll_no);
    
    printf("\nstudent marks ");
    scanf("%d",&d.marks);

    printf("Name\t\tRoll no\t\t\tClass\t\tMarks\n");
    printf("%s\t\t%d\t\t\t%d\t\t%d\t\t",d.name, d.class1, d.roll_no, d.marks);

    return 0;

}