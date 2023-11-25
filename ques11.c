#include <stdio.h>

void main()
{
	int num1,num2;
    char ch;
    printf("Enter one of the following chs(+,-,*,/):");
    scanf("%c",&ch);

    printf("Enter the value of two numbers:\nNUM1:");
    scanf("%d",&num1);
    printf("NUM2:");
    scanf("%d",&num2);
    
    
    switch(ch)   
    {
		 case '+':
			printf("%d+%d=%d",num1,num2,(num1+num2));
			break;

		 case '-':
			printf("%d-%d=%d",num1,num2,(num1-num2));
			break;

		 case '*':
			printf("%d*%d=%d",num1,num2,(num1*num2));
			break;

		 case '/':
			printf("%d/%d=%d",num1,num2,(num1/num2));
			break;


		 default:
			printf("Invalid Input....");
			break;
	}

}