// Write a C program to check whether a number is positive/negative/zero.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    if(x>0)
    {
        printf("%d is a Positive Number",x);
    }
    else if(x<0)
    {
        printf("%d is a Negative Number",x);
    }
    else
    {
        printf("The number is Zero");
    }

   getch();
}

