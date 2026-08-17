/*
Question Q16: Write a program to input three numbers and find the largest among them using if–else.

Official sample test cases:
Sample input: 3 7 5\nSample output: Largest is 7
Sample input: -1 -5 0\nSample output: Largest is 0
*/

/* Question Q16 | Day 08 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    long long a;
    long long b;
    long long c;
    long long largest;

    if (scanf("%lld %lld %lld", &a, &b, &c) != 3)
    {

        return 1;
    }
    largest = a;

    if (b > largest)
    {

        largest = b;
    }
    if (c > largest)
    {

        largest = c;
    }
    printf("Largest is %lld\n", largest);

    return 0;
}
