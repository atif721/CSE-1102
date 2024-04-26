//Write a C program to check an integer number is positive or negative and divisible by 3 and 13.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\n");

    // checking positive or negative

    if(num>=0)
    {
        printf("The number %d is Positive\n",num);
    }
    else if(num<0)
    {
        printf("The number %d is Negative\n",num);
    }

    // checking if divisible by 3 & 13

    if(num%3==0 && num%13==0)
    {
        printf("The number %d is divisible by 3 & 13",num);
    }
    else
    {
        printf("Invalid Input");
    }


    getch();
}
