// Write a C program to print sum, subtraction, multiplication, division of two numbers Here both numbers and arithmetic operator (+,-,/,*) must be user inputted

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a arithmetic operator (+,-,/,*) : ");
    scanf("%c",&ch);
    int num1,num2;
    printf("\nEnter First Number : ");
    scanf("%d",&num1);
    printf("\nEnter Second Number : ");
    scanf("%d",&num2);
    printf("\n");

    switch(ch)
    {
    case '+':
        printf("Sum of %d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':
        printf("Subtraction of %d - %d = %d",num1,num2,num1-num2);
        break;
    case '*':
        printf("Multiplication of %d * %d = %d",num1,num2,num1*num2);
        break;
    case '/':
        printf("Division of %d / %d = %d",num1,num2,num1/num2);
        break;
    default:
        printf("Invalid Input");
        return 1;
    }

    getch();
}
