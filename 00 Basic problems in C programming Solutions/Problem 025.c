// Write a C program to check leap year between a range of years.

#include<stdio.h>
int main()
{
    int Srtyear,Stpyear;
    printf("Enter a starting year : ");
    scanf("%d",&Srtyear);
    printf("\nEnter a starting year : ");
    scanf("%d",&Stpyear);
    printf("\n");

    for(int i=Srtyear; i<=Stpyear; i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
        {
            printf("%d, ",i);
        }
    }
    printf("are Leap years");

    getch();
}
