#include <stdio.h>

int main()
{
    int n,sum=0,term=1,incr=1;
    printf("Enter the nth-term: ");
    scanf("%d", &n);
    printf("\n");

    printf("The series is: ");
    for (int i = 1; i <= n; i++)
    {
        sum += term;

        printf("%d", term);
        if(i<n)
        {
            printf("+");
        }

        term += incr;
        incr++;
    }

    printf("\n\nThe sum of the series is: %d\n", sum);

    return 0;
}

