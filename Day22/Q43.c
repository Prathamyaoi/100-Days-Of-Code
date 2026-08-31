/*
Question Q43: Write a program to check if a number is a strong number.

Official sample test cases:
Sample input: 145\nSample output: Strong number
Sample input: 123\nSample output: Not strong number
*/

/* Question Q43 | Day 22 | Topic: Loops */

#include <stdio.h>

int factorial(int n)
{

    int f = 1;

    for (int i = 2; i <= n; i++)
    {

        f *= i;
    }
    return f;
}
int main(void)
{

    int n;
    int temp;
    int sum = 0;

    if (scanf("%d", &n) != 1 || n < 0)
    {

        return 1;
    }
    temp = n;

    do
    {

        sum += factorial(temp % 10);

        temp /= 10;
    }
    while (temp);

    puts(sum == n ? "Strong number": "Not strong number");

    return 0;
}
