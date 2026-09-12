/*
Question Q67: Insert an element in an array at a given position.

Official sample test case:
Sample input: 4
10 20 30 40
2 15
Sample output: 10 20 15 30 40
*/

/* Question Q67 | Day 34 | Topic: Arrays (1D) */

#include <stdio.h>

#define MAX_SIZE 1000

int main(void)
{
    int numbers[MAX_SIZE];
    int n;
    int position;
    int newValue;
    int i;

    if (scanf("%d", &n) != 1 || n < 0 || n >= MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    if (scanf("%d %d", &position, &newValue) != 2 || position < 0 || position > n)
    {
        puts("Invalid position");
        return 0;
    }

    for (i = n; i > position; i--)
    {
        numbers[i] = numbers[i - 1];
    }

    numbers[position] = newValue;
    n++;

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
