/*
Question Q42: Write a program to check if a number is a perfect number.

Official sample test cases:
Sample input: 6\nSample output: Perfect number
Sample input: 10\nSample output: Not perfect number
*/

/* Question Q42 | Day 21 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    int n;
    int sum = 0;

    if (scanf("%d", &n) != 1 || n <= 0)
    {

        return 1;
    }
    for (int d = 1; d <= n / 2; d++)
    {

        if (n % d == 0)
        {

            sum += d;
        }
    }
    puts(sum == n ? "Perfect number": "Not perfect number");

    return 0;
}
