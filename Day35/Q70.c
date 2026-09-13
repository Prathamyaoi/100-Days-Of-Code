/*
Question Q70: Rotate an array to the right by k positions.

Official sample test case:
Sample input: 5
1 2 3 4 5
2
Sample output: 4 5 1 2 3
*/

/* Question Q70 | Day 35 | Topic: Arrays (1D) */

#include <stdio.h>

#define MAX_SIZE 1000

int main(void)
{
    int numbers[MAX_SIZE];
    int n;
    int rotations;
    int step;
    int last;
    int i;

    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    if (scanf("%d", &rotations) != 1 || rotations < 0)
    {
        return 1;
    }

    if (n > 0)
    {
        rotations %= n;
    }

    for (step = 0; step < rotations; step++)
    {
        last = numbers[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            numbers[i] = numbers[i - 1];
        }

        numbers[0] = last;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);

        if (i == n - 1)
        {
            putchar('\n');
        }
        else
        {
            putchar(' ');
        }
    }

    return 0;
}
