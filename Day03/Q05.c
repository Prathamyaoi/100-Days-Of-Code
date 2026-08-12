/*
Question Q05: Write a program to convert temperature from Celsius to Fahrenheit.

Official sample test cases:
Sample input: 0\nSample output: Fahrenheit=32
Sample input: 100\nSample output: Fahrenheit=212
*/

/* Question Q05 | Day 03 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{

    double c;

    if (scanf("%lf", &c) != 1)
    {

        return 1;
    }
    printf("Fahrenheit=%.0f\n", c * 9.0 / 5.0 + 32);

    return 0;
}
