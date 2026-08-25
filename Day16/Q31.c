/*
Question Q31: Write a program to take a number as input and print its equivalent binary representation.

Official sample test cases:
Sample input: 10\nSample output: 1010
Sample input: 7\nSample output: 111
*/

/* Question Q31 | Day 16 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    unsigned long long n;

    int bits[64];
    int count = 0;

    if (scanf("%llu", &n) != 1)
    {

        return 1;
    }
    if (n == 0)
    {

        puts("0");

        return 0;
    }

    /* Store the remainders, then print them from right to left. */
    while (n)
    {

        bits[count++] = (int)(n % 2);

        n /= 2;
    }
    for (int i = count - 1; i >= 0; i--)
    {

        putchar('0' + bits[i]);
    }
    putchar('\n');

    return 0;
}
