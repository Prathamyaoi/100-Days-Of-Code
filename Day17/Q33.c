/*
Question Q33: Write a program to check if a number is an Armstrong number.

Official sample test cases:
Sample input: 153\nSample output: Armstrong
Sample input: 123\nSample output: Not Armstrong
*/

/* Question Q33 | Day 17 | Topic: Loops */

#include <stdio.h>

long long power(int base, int exponent)
{

    long long result = 1;

    while (exponent--)
    {

        result *= base;
    }
    return result;
}
int main(void)
{

    long long n;
    long long temp;
    long long sum = 0;

    int digits = 0;

    if (scanf("%lld", &n) != 1 || n < 0)
    {

        return 1;
    }
    temp = n;

    /* Count digits first so this also works for non-negative values of any length. */
    do
    {

        digits++;

        temp /= 10;
    }
    while (temp);

    temp = n;

    do
    {

        sum += power((int)(temp % 10), digits);

        temp /= 10;
    }
    while (temp);

    puts(sum == n ? "Armstrong": "Not Armstrong");

    return 0;
}
