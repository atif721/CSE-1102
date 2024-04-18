// Write a C program to generate multiplication table for integer ‘n’.

#include<stdio.h>
int main()
{
    int i,a,value=1;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Multiplication table of %d : \n",a);

    for(i=1; i<=10; i++)
    {
        value = a*i;
        printf("%2d * %2d = %3d\n",a,i,value);
    }

    getch();
}

