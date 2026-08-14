/*
Question Q09: Write a program to calculate simple and compound interest for given principal, rate, and time.

Official sample test cases:
Sample input: 1000 5 2\nSample output: Simple Interest=100, Compound Interest=102.5
Sample input: 5000 7 3\nSample output: Simple Interest=1050, Compound Interest=1125.76
*/

/* Question Q09 | Day 05 | Topic: Input, operations, and output */

#include <stdio.h>
#include <math.h>

int main(void)
{

    double p;
    double r;
    double t;

    if (scanf("%lf %lf %lf", &p, &r, &t) != 3 || p < 0 || t < 0)
    {

        return 1;
    }
    printf("Simple Interest=%g, Compound Interest=%g\n", p * r * t / 100.0, p * (pow(1 + r / 100.0, t) - 1));

    return 0;
}
