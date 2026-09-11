/*
Question Q66: Insert an element in a sorted array at the appropriate position.

Official sample test case:
Sample input: 5
1 2 4 5 6
3
Sample output: 1 2 3 4 5 6
*/

/* Question Q66 | Day 33 | Topic: Arrays (1D) */

#include <stdio.h>

#define MAX_SIZE 1000

int main(void)
{
    int numbers[MAX_SIZE];
    int n;
    int newValue;
    int position;
    int i;

    if (scanf("%d", &n) != 1 || n < 0 || n >= MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    if (scanf("%d", &newValue) != 1)
    {
        return 1;
    }

    position = 0;
    while (position < n && numbers[position] < newValue)
    {
        position++;
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
