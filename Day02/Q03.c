/*
Question Q03: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Official sample test cases:
Sample input: 5 10\nSample output: Area=50, Perimeter=30
Sample input: 3 7\nSample output: Area=21, Perimeter=20
*/

/* Question Q03 | Day 02 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{

    double length;
    double breadth;

    if (scanf("%lf %lf", &length, &breadth) != 2 || length < 0 || breadth < 0)
    {

        return 1;
    }
    printf("Area=%.0f, Perimeter=%.0f\n", length * breadth, 2 * (length + breadth));

    return 0;
}
