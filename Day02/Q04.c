/*
Question Q04: Write a program to calculate the area and circumference of a circle given its radius.

Official sample test cases:
Sample input: 7\nSample output: Area=153.94, Circumference=43.96
Sample input: 3\nSample output: Area=28.27, Circumference=18.85
*/

/* Question Q04 | Day 02 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{

    double radius;

    const double PI = 3.14159;

    if (scanf("%lf", &radius) != 1 || radius < 0)
    {

        return 1;
    }
    printf("Area=%.2f, Circumference=%.2f\n", PI * radius * radius, 2 * PI * radius);

    return 0;
}
