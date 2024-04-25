#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20

int main()
{
    int i,array[ARRAY_SIZE], sum=0;

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
        sum += array[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
