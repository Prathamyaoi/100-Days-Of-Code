/*
Question Q64: Find the digit that occurs the most times in an integer number.

Official sample test cases:
Sample input: 112233
Sample output: 1
Sample input: 887799
Sample output: 7
*/

/* Question Q64 | Day 32 | Topic: Arrays (1D) */

#include <stdio.h>

int main(void)
{
    long long number;
    long long temporary;
    int digitCount[10] = {0};
    int mostCommonDigit = 0;
    int digit;

    if (scanf("%lld", &number) != 1)
    {
        return 1;
    }

    if (number < 0)
    {
        number = -number;
    }

    temporary = number;

    do
    {
        digit = temporary % 10;
        digitCount[digit]++;
        temporary /= 10;
    }
    while (temporary != 0);

    for (digit = 1; digit < 10; digit++)
    {
        if (digitCount[digit] > digitCount[mostCommonDigit])
        {
            mostCommonDigit = digit;
        }
    }

    printf("%d\n", mostCommonDigit);

    return 0;
}
