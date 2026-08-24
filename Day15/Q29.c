/*
Question Q29: Write a program to calculate the factorial of a number.

Official sample test cases:
Sample input: 5\nSample output: 120
Sample input: 3\nSample output: 6
*/

/* Question Q29 | Day 15 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    unsigned long long n;
    unsigned long long f = 1;

    if (scanf("%llu", &n) != 1)
    {

        return 1;
    }
    for (unsigned long long i = 2; i <= n; i++)
    {

        f *= i;
    }
    printf("%llu\n", f);

    return 0;
}
