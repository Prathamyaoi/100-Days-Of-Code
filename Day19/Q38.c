/*
Question Q38: Write a program to find the sum of digits of a number.

Official sample test cases:
Sample input: 123\nSample output: 6
Sample input: 999\nSample output: 27
*/

/* Question Q38 | Day 19 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    unsigned long long n;
    unsigned long long sum = 0;

    if (scanf("%llu", &n) != 1)
    {

        return 1;
    }
    do
    {

        sum += n % 10;

        n /= 10;
    }
    while (n);

    printf("%llu\n", sum);

    return 0;
}
