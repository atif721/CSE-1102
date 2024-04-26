// Write a C program to print quotient and reminder without using modules (%) sign.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);

    int quotient = x/y;
    int reminder = x - (quotient*y);

    printf("Quotient is %d",quotient);
    printf("\nReminder is %d",reminder);

    return 0;
}
