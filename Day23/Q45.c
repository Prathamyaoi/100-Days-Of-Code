/*
Question Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Official sample test cases:
Sample input: 3\nSample output: Approximate sum: 1.56
Sample input: 5\nSample output: Approximate sum: 2.22
*/

/* Question Q45 | Day 23 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    int n;

    double sum = 0;

    if (scanf("%d", &n) != 1 || n < 0)
    {

        return 1;
    }
    for (int i = 1; i <= n; i++)
    {

        sum += (2.0 * i) / (4.0 * i - 1);
    }
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
