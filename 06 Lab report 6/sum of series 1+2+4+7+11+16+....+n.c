#include <stdio.h>

int main()
{
    int n,sum=0,term=1,incr=1;
    printf("Enter the nth-term: ");
    scanf("%d", &n);

    printf("The series is: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", term);
        sum += term;
        term += incr;
        incr++;
    }

    printf("\nThe sum of the series is: %d\n", sum);

    return 0;
}

