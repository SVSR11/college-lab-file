#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t,n,choice,ci;
    printf("Enter the values of:-\nPrincipal:-");
    scanf("%d",&p);
    printf("Rate:-");
    scanf("%d",&r);
    printf("Time:-");
    scanf("%d",&t);
    printf("enter 1 for SI and 2 for CI:-");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("\nThe SI is:- %d", (p*r*t)/100);

    }
    else if (choice==2)
    {
        printf("Enter the value of n (no. of times value is compounded anually:-)");
        scanf("%d",&n);
        ci= p * pow((1 + r / n), n * t);
        printf("The CI is:-%d",ci-p);
    }
    else
    {
        printf("Invalid input");
    }
   

}