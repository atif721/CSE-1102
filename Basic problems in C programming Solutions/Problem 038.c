// Write a C program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    printf("Enter a number : ");
    scanf("%d",&x);

    a=x%10;
    y=x/10;
    b=y%10;
    c=y/10;

    d=(a*a*a)+(b*b*b)+(c*c*c);

    if(d==x)
    {
        printf("\n%d is Armstrong Number",x);
    }
    else
    {
        printf("\n%d is not Armstrong Number",x);
    }


    getch();
}
