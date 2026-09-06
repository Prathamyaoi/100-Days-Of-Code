/*
Question Q55: Write a program to print all the prime numbers from 1 to n.

Official sample test cases:
Sample input: 10\nSample output: 2 3 5 7
Sample input: 20\nSample output: 2 3 5 7 11 13 17 19
*/

/* Question Q55 | Day 28 | Topic: Nested loops */

#include <stdio.h>

int is_prime(int n)
{

    if (n < 2)
    {

        return 0;
    }
    for (int d = 2; d <= n / d; d++)
    {

        if (n % d == 0)
        {

            return 0;
        }
    }
    return 1;
}
int main(void)
{

    int n;
    int first = 1;

    if (scanf("%d", &n) != 1 || n < 0)
    {

        return 1;
    }
    for (int value = 2; value <= n; value++)
    {

        if (is_prime(value))
        {

            printf("%s%d", first ? "": " ", value);

            first = 0;
        }
    }
    putchar('\n');

    return 0;
}
