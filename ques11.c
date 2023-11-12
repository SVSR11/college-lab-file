#include <stdio.h>

void main()
{
	float num1,num2;
    char ch;
    printf("Enter the value of two numbers:\nNUM1:");
    scanf("%f",&num1);
    printf("NUM2:");
    scanf("%f",&num2);
    
    printf("Enter one of the following chs(+,-,*,/):");
    scanf("%c",&ch);
    
    printf("\n%c",ch);

    switch(ch)   
    {
		 case '+':
			printf("%f+%f=%f",num1,num2,(num1+num2));
			break;

		 case '-':
			printf("%f-%f=%f",num1,num2,(num1-num2));
			break;

		 case '*':
			printf("%f*%f=%f",num1,num2,(num1*num2));
			break;

		 case '/':
			printf("%f/%f=%f",num1,num2,(num1/num2));
			break;


		 default:
			printf("Invalid Input....");
			break;
	}

}
