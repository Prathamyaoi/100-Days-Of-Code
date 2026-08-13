/*
Question Q07: Write a program to swap two numbers without using a third variable.

Official sample test cases:
Sample input: 10 20\nSample output: After swap: 20 10
Sample input: 7 14\nSample output: After swap: 14 7
*/

/* Question Q07 | Day 04 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{
    long long a;
    long long b;
    long long temporary;

    if (scanf("%lld %lld", &a, &b) != 2)
    {
        return 1;
    }

    temporary = a;
    a = b;
    b = temporary;

    printf("After swap: %lld %lld\n", a, b);

    return 0;
}
