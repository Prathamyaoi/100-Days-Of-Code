/*
Question Q39: Write a program to find the product of odd digits of a number.

Official sample test cases:
Sample input: 12345\nSample output: 15 (1*3*5)
Sample input: 2468\nSample output: 1 (no odd digits, assume 1)
*/

/* Question Q39 | Day 20 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    unsigned long long n;
    unsigned long long original;
    unsigned long long product = 1;
    unsigned long long place = 1;

    int found = 0;
    int first = 1;

    if (scanf("%llu", &n) != 1)
    {

        return 1;
    }
    original = n;

    do
    {

        unsigned digit = n % 10;

        n /= 10;

        if (digit % 2)
        {

            product *= digit;

            found = 1;
        }
    }
    while (n);

    if (! found)
    {

        puts("1 (no odd digits, assume 1)");

        return 0;
    }
    while (place <= original / 10)
    {

        place *= 10;
    }
    printf("%llu (", product);

    while (place)
    {

        unsigned digit = original / place;

        original %= place;

        place /= 10;

        if (digit % 2)
        {

            printf("%s%u", first ? "": "*", digit);

            first = 0;
        }
    }
    puts(")");

    return 0;
}
