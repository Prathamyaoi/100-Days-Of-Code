/*
Question Q35: Write a program to print all factors of a given number.

Official sample test cases:
Sample input: 6\nSample output: 1 2 3 6
Sample input: 10\nSample output: 1 2 5 10
*/

/* Question Q35 | Day 18 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    int n;
    int first = 1;

    if (scanf("%d", &n) != 1 || n <= 0)
    {

        return 1;
    }
    for (int d = 1; d <= n; d++)
    {

        if (n % d == 0)
        {

            printf("%s%d", first ? "": " ", d);

            first = 0;
        }
    }
    putchar('\n');

    return 0;
}
