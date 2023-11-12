#include<stdio.h>

void main()
{
    float English,hindi,maths,science,sst,percentage;
    printf("Enter marks of 5 subjects(out of 100):\nEnglish:");
    scanf("%f",&English);
    printf("Hindi:");
    scanf("%f",&hindi);
    printf("Maths:");
    scanf("%f",&maths);
    printf("Science:");
    scanf("%f",&science);
    printf("SST:");
    scanf("%f",&sst);
    percentage=(((English+hindi+maths+science+sst)*100)/500.0);
    printf("Percentage of marks obtained: %f",percentage);

    if (percentage>=90)
    {
        printf("\n                       Grade: A");
    }
    else if(percentage>=80 & percentage<90)
    {
        printf("\n                       Grade: B");
    }
    else if(percentage>=60 & percentage<80)
    {
        printf("\n                       Grade: C");
    }
    else
    {
        printf("\n                       Grade: D");
    }
}