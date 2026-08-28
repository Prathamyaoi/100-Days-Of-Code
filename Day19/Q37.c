/*
Question Q37: Write a program to find the LCM of two numbers.

Official sample test cases:
Sample input: 4 5\nSample output: 20
Sample input: 7 3\nSample output: 21
*/

/* Question Q37 | Day 19 | Topic: Loops */

#include <stdio.h>

long long gcd(long long a, long long b)
{

    while (b)
    {

        long long r = a % b;

        a = b;

        b = r;
    }
    return a;
}
int main(void)
{

    long long a;
    long long b;
    long long g;

    if (scanf("%lld %lld", &a, &b) != 2)
    {

        return 1;
    }
    if (a < 0)
    {

        a = - a;
    }
    if (b < 0)
    {

        b = - b;
    }
    g = gcd(a, b);

    printf("%lld\n", g == 0 ? 0: (a / g) * b);

    return 0;
}
