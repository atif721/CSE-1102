//Write a C program to check leap year.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    printf("\n");

    if((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is not a Leap Year",year);
    }


    getch();
}
