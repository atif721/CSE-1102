#include<stdio.h>
int main()
{
    int r,a=-1,b=1,c,i;
    printf("Enter a range : ");
    scanf("%d",&r);
    printf("\nFibonacci Series : ",r);


    for(i=0; i<r; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    getch();
}
