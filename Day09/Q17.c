/*
Question Q17: Write a program to find the roots of a quadratic equation and categorize them.

Official sample test cases:
Sample input: 1 -3 2\nSample output: Roots are real and different: 2, 1
Sample input: 1 -2 1\nSample output: Roots are real and same: 1
Sample input: 1 2 5\nSample output: Roots are complex
*/

/* Question Q17 | Day 09 | Topic: Conditional statements */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;
    double b;
    double c;
    double d;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0)
    {
        puts("Invalid quadratic equation");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        printf("Roots are real and different: %.0f, %.0f\n",
               (-b + sqrt(d)) / (2 * a),
               (-b - sqrt(d)) / (2 * a));
    }
    else if (d == 0)
    {
        printf("Roots are real and same: %.0f\n", -b / (2 * a));
    }
    else
    {
        puts("Roots are complex");
    }

    return 0;
}
