/*
Question Q57: Find the sum of array elements.

Official sample test cases:
Sample input: 4
2 4 6 8\nSample output: 20
Sample input: 3
1 1 1\nSample output: 3
*/

/* Question Q57 | Day 29 | Topic: Arrays (1D) */

#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{

    int values[MAX_SIZE];
    int n;

    long long sum = 0;

    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
    {

        return 1;
    }
    for (int i = 0; i < n; i++)
    {

        if (scanf("%d", &values[i]) != 1)
        {

            return 1;
        }
        sum += values[i];
    }
    printf("%lld\n", sum);

    return 0;
}
