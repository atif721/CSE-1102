#include <stdio.h>

int main()
{
    char sentn[100], ch;
    int count = 0;

    printf("Input a sentence: ");
    fgets(sentn, sizeof(sentn), stdin);
-
    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (int i = 0; sentn[i] != 0; i++)
    {
        if (sentn[i] == ch || sentn[i] - 32 == ch || sentn[i] + 32 == ch)
        {
            count++;
        }
    }

    printf("In this string,'%c' appeared %d times.\n", ch, count);
}
