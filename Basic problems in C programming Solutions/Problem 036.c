// Write a C program to find the area of a circle given its radius.

#include <stdio.h>

#define PI 3.1416

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("\n");

    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    getch();
}
