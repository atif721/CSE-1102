#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main()
{
    int i,array[ARRAY_SIZE],search_element,found = 0;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand()%50;
    }

    printf("Random numbers in the array:\n\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &search_element);

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        if (array[i] == search_element)
        {
            found = i;
            break;
        }
    }

    if (found)
    {
        printf("\nElement %d found at index %d\n", search_element, i);
    }
    else
    {
        printf("\nElement %d not found in the array\n", search_element);
    }

    return 0;
}


