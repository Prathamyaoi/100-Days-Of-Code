/*
Question Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Official sample test cases:
Sample input: 3 3 3\nSample output: Equilateral
Sample input: 3 3 4\nSample output: Isosceles
Sample input: 2 3 4\nSample output: Scalene
*/

/* Question Q19 | Day 10 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{
    long long a;
    long long b;
    long long c;

    if (scanf("%lld %lld %lld", &a, &b, &c) != 3 ||
        a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        puts("Invalid triangle");
        return 0;
    }

    if (a == b && b == c)
    {
        puts("Equilateral");
    }
    else if (a == b || b == c || a == c)
    {
        puts("Isosceles");
    }
    else
    {
        puts("Scalene");
    }

    return 0;
}
