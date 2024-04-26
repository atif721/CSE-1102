// Write a C program to check an integer number is odd or even.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%2==0)
        printf("\n%d is a Even number\n",x);
    else
        printf("\n%d is a Odd number\n",x);

    getch();
}
