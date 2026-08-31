/*
Question Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Official sample test cases:
Sample input: 3\nSample output: Approximate sum: 3.3
Sample input: 5\nSample output: Approximate sum: 4.4
*/

/* Question Q44 | Day 22 | Topic: Loops */

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

        sum += (i == 1) ? 1.0: (2.0 * i - 1) / (2.0 * i);
    }
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
