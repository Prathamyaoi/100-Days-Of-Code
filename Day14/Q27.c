/*
Question Q27: Write a program to print the sum of the first n odd numbers.

Official sample test cases:
Sample input: 3\nSample output: 9
Sample input: 5\nSample output: 25
*/

/* Question Q27 | Day 14 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    long long n;
    long long sum = 0;

    if (scanf("%lld", &n) != 1 || n < 0)
    {

        return 1;
    }
    for (long long i = 1; i <= n; i++)
    {

        sum += 2 * i - 1;
    }
    printf("%lld\n", sum);

    return 0;
}
