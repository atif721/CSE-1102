#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

#define ARRAY_SIZE 10

int main()
{
    srand(time(NULL));

    int i,j,prime,array[ARRAY_SIZE], sum=0;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand()%10;
    }

    printf("Random numbers in the array:\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("array[%3d] = %d\n",i,array[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        prime = 1;
        for (j = 2; j <= array[i] / 2; j++)
        {
            if (array[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime && array[i] > 1)
        {
            sum += array[i];
        }
    }

    printf("Sum of prime numbers in the array: %d\n", sum);


    return 0;
}

