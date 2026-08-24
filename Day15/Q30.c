/*
Question Q30: Write a program to reverse a given number.

Official sample test cases:
Sample input: 1234\nSample output: 4321
Sample input: 100\nSample output: 1
*/

/* Question Q30 | Day 15 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    long long n;
    long long reverse = 0;

    if (scanf("%lld", &n) != 1 || n < 0)
    {

        return 1;
    }
    do
    {

        reverse = reverse * 10 + n % 10;

        n /= 10;
    }
    while (n);

    printf("%lld\n", reverse);

    return 0;
}
