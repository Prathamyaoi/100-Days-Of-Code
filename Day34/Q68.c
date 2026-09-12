/*
Question Q68: Delete an element from an array.

Official sample test case:
Sample input: 5
1 2 3 4 5
2
Sample output: 1 2 4 5
*/

/* Question Q68 | Day 34 | Topic: Arrays (1D) */

#include <stdio.h>

#define MAX_SIZE 1000

int main(void)
{
    int numbers[MAX_SIZE];
    int n;
    int position;
    int i;

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    if (scanf("%d", &position) != 1 || position < 0 || position >= n)
    {
        puts("Invalid position");
        return 0;
    }

    for (i = position; i < n - 1; i++)
    {
        numbers[i] = numbers[i + 1];
    }

    n--;

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
