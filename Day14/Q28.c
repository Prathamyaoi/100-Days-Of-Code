/*
Question Q28: Write a program to print the product of even numbers from 1 to n.

Official sample test cases:
Sample input: 4\nSample output: 8 (2 * 4)
Sample input: 6\nSample output: 48 (2 * 4 * 6)
*/

/* Question Q28 | Day 14 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    long long n;
    long long product = 1;

    if (scanf("%lld", &n) != 1 || n < 0)
    {

        return 1;
    }
    for (long long i = 2; i <= n; i += 2)
    {

        product *= i;
    }
    printf("%lld (", product);

    for (long long i = 2; i <= n; i += 2)
    {

        printf("%s%lld", i == 2 ? "": " * ", i);
    }
    puts(")");

    return 0;
}
