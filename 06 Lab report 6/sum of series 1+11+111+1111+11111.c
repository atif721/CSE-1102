#include <stdio.h>

int main()
{
    int term, multiplier,sum=0,term2=1,num=0;
    printf("Enter the number of terms: ");
    scanf("%d", &term);
    printf("Enter the multiplier: ");
    scanf("%d", &multiplier);

    for (int i = 1; i <= term; i++)
    {
        num = num * 10 + multiplier;
        term2 = term2 * 10;
        sum += num;
        printf("%d+",num);
    }

    printf("\nThe sum of the series is: %d\n", sum);

    return 0;
}
