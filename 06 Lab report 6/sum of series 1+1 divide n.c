#include <stdio.h>

int main()
{
    int term;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &term);
    printf("\n");

    for (int i = 1; i <= term; i++)
    {
        printf("1/%d",i);
        if(i<term)
        {
            printf(" + ");
        }
        sum += 1.0 / i;
    }

    printf("\n\nThe sum of the series is: %.3f\n", sum);

    return 0;
}
