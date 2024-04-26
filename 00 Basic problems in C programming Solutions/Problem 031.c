// Write a C program to find the sum of the following series : 2+4+8+16+32…..+nth term.

#include<stdio.h>
int main()
{
    int i,n, term=2, sum=0;

    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("\n");

    for(i=0; i<n; i++)
    {
        sum = sum+term;
        term = term * 2;
    }

    printf("Sum of the series : %d\n",sum);


    getch();
}
