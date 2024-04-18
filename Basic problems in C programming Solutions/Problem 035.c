// Write a C program to calculate the power of a number.

#include<stdio.h>
int main()
{
    int x,y,i,s=1;
    printf("Enter a coefficient : ");
    scanf("%d",&x);
    printf("\nEnter a power : ");
    scanf("%d",&y);

    for(i=1; i<=y; i++)
    {

        s=s*x;
    }

    printf("\n%d Power of %d = %d",x,y,s);




    getch();
}
