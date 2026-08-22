/*
Question Q26: Write a program to print numbers from 1 to n.

Official sample test cases:
Sample input: 5\nSample output: 1 2 3 4 5
Sample input: 3\nSample output: 1 2 3
*/

/* Question Q26 | Day 13 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    int n;

    if (scanf("%d", &n) != 1 || n < 0)
    {

        return 1;
    }
    for (int i = 1; i <= n; i++)
    {

        printf("%d%s", i, i == n ? "\n": " ");
    }
    return 0;
}
