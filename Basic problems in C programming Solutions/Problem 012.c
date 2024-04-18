// Write a C program to calculate the sum of integer numbers between a range of integers.

#include<stdio.h>
int main()
{
    int i,srt,stp,sum=0;
    printf("Enter Starting range : ");
    scanf("%d",&srt);
    printf("\nEnter Ending range : ");
    scanf("%d",&stp);

    for(i=srt; i<=stp; i++)
    {
        sum=sum+i;
    }
    printf("\nSum of integer numbers between %d - %d : %d\n",srt,stp,sum);


    getch();
}

