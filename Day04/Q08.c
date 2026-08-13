/*
Question Q08: Write a program to find and display the sum of the first n natural numbers.

Official sample test cases:
Sample input: 5\nSample output: Sum=15
Sample input: 10\nSample output: Sum=55
*/

/* Question Q08 | Day 04 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{

    long long n;

    if (scanf("%lld", &n) != 1 || n < 0)
    {

        return 1;
    }
    printf("Sum=%lld\n", n * (n + 1) / 2);

    return 0;
}
