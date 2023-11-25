#include<stdio.h>

void main()
{
    int English,hindi,maths,science,sst,total;
    printf("Enter marks of 5 subjects(out of 100):\nEnglish:- ");
    scanf("%d",&English);
    printf("Hindi:-");
    scanf("%d",&hindi);
    printf("Maths:-");
    scanf("%d",&maths);
    printf("Science:-");
    scanf("%d",&science);
    printf("SST:-");
    scanf("%d",&sst);
    total=English+hindi+maths+science+sst;
    printf("\nTotal marks out of 500 are:- %d",total);
    printf("\nPercent of marks:- %d",total/5);
}