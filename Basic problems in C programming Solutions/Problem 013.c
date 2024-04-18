// Write a C program to calculate Evensum & Oddsum of integers between a range of integer.

#include<stdio.h>
int main()
{
    int i,srt,stp,Evensum=0,Oddsum=0;
    printf("Enter Starting range : ");
    scanf("%d",&srt);
    printf("\nEnter Ending range : ");
    scanf("%d",&stp);

    for(i=srt; i<=stp; i++)
    {
        if(i%2==0)
        {
            Evensum=Evensum+i;
        }
        else
        {
            Oddsum = Oddsum+i;
        }
    }
    printf("\nEvenSum of integer numbers between %d - %d : %d\n",srt,stp,Evensum);
    printf("\nOddSum of integer numbers between %d - %d : %d\n",srt,stp,Oddsum);

    getch();
}

