/*
Question Q11: Write a program to input an integer and check whether it is even or odd using if–else.

Official sample test cases:
Sample input: 7\nSample output: 7 is odd
Sample input: 12\nSample output: 12 is even
*/

/* Question Q11 | Day 06 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    long long n;

    if (scanf("%lld", &n) != 1)
    {

        return 1;
    }
    printf("%lld is %s\n", n, n % 2 == 0 ? "even": "odd");

    return 0;
}
