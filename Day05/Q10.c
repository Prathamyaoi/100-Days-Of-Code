/*
Question Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Official sample test cases:
Sample input: 3661\nSample output: 1:1:1
Sample input: 7322\nSample output: 2:2:2
*/

/* Question Q10 | Day 05 | Topic: Input, operations, and output */

#include <stdio.h>

int main(void)
{

    long long seconds;

    if (scanf("%lld", &seconds) != 1 || seconds < 0)
    {

        return 1;
    }
    printf("%lld:%lld:%lld\n", seconds / 3600, (seconds % 3600) / 60, seconds % 60);

    return 0;
}
