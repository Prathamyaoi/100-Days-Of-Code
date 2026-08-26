/*
Question Q34: Write a program to check if a number is prime.

Official sample test cases:
Sample input: 7\nSample output: Prime
Sample input: 10\nSample output: Not prime
*/

/* Question Q34 | Day 17 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    long long n;

    int prime = 1;

    if (scanf("%lld", &n) != 1 || n < 0)
    {

        return 1;
    }
    if (n < 2)
    {

        prime = 0;
    }
    for (long long d = 2; d <= n / d && prime; d++)
    {

        if (n % d == 0)
        {

            prime = 0;
        }
    }
    puts(prime ? "Prime": "Not prime");

    return 0;
}
