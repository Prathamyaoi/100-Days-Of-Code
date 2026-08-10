/*
Question Q01: Write a program to input two numbers and display their sum.

Official sample test cases:
Sample input: 3 4\nSample output: Sum = 7
Sample input: -1 20\nSample output: Sum = 19
*/

/* Question Q01 | Day 01 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{
    long long firstNumber;
    long long secondNumber;

    if (scanf("%lld %lld", &firstNumber, &secondNumber) != 2)
    {
        return 1;
    }

    printf("Sum = %lld\n", firstNumber + secondNumber);

    return 0;
}
