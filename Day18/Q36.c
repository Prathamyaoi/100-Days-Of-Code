/*
Question Q36: Write a program to find the HCF (GCD) of two numbers.

Official sample test cases:
Sample input: 12 18\nSample output: 6
Sample input: 7 9\nSample output: 1
*/

/* Question Q36 | Day 18 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    long long a;
    long long b;
    long long remainder;

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

    /* Euclid's algorithm keeps replacing the pair with (b, a remainder b). */
    while (b)
    {

        remainder = a % b;

        a = b;

        b = remainder;
    }
    printf("%lld\n", a);

    return 0;
}
