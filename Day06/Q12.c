/*
Question Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Official sample test cases:
Sample input: -5\nSample output: Negative
Sample input: 0\nSample output: Zero
Sample input: 10\nSample output: Positive
*/

/* Question Q12 | Day 06 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) != 1)
    {
        return 1;
    }

    if (n > 0)
    {
        puts("Positive");
    }
    else if (n < 0)
    {
        puts("Negative");
    }
    else
    {
        puts("Zero");
    }

    return 0;
}
