/*
Question Q02: Write a program to input two numbers and display their sum, difference, product, and quotient.

Official sample test cases:
Sample input: 10 2\nSample output: Sum=12, Diff=8, Product=20, Quotient=5
Sample input: 7 3\nSample output: Sum=10, Diff=4, Product=21, Quotient=2
*/

/* Question Q02 | Day 01 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{

    long long a;
    long long b;

    if (scanf("%lld %lld", &a, &b) != 2)
    {

        return 1;
    }
    if (b == 0)
    {

        printf("Division by zero\n");

        return 0;
    }
    printf("Sum=%lld, Diff=%lld, Product=%lld, Quotient=%lld\n", a + b, a - b, a * b, a / b);

    return 0;
}
