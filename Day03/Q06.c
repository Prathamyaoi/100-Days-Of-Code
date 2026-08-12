/*
Question Q06: Write a program to swap two numbers using a third variable.

Official sample test cases:
Sample input: 3 5\nSample output: After swap: 5 3
Sample input: -1 1\nSample output: After swap: 1 -1
*/

/* Question Q06 | Day 03 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{

    long long a;
    long long b;
    long long temp;

    if (scanf("%lld %lld", &a, &b) != 2)
    {

        return 1;
    }
    temp = a;

    a = b;

    b = temp;

    printf("After swap: %lld %lld\n", a, b);

    return 0;
}
