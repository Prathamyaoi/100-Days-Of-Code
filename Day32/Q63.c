/*
Question Q63: Merge two arrays.

Official sample test case:
Sample input: 3
1 2 3
2
4 5
Sample output: 1 2 3 4 5
*/

/* Question Q63 | Day 32 | Topic: Arrays (1D) */

#include <stdio.h>

#define MAX_SIZE 1000

int main(void)
{
    int firstArray[MAX_SIZE];
    int secondArray[MAX_SIZE];
    int firstSize;
    int secondSize;
    int i;
    int firstOutput = 1;

    if (scanf("%d", &firstSize) != 1 || firstSize < 0 || firstSize > MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < firstSize; i++)
    {
        scanf("%d", &firstArray[i]);
    }

    if (scanf("%d", &secondSize) != 1 || secondSize < 0 || secondSize > MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < secondSize; i++)
    {
        scanf("%d", &secondArray[i]);
    }

    for (i = 0; i < firstSize; i++)
    {
        if (!firstOutput)
        {
            putchar(' ');
        }

        printf("%d", firstArray[i]);
        firstOutput = 0;
    }

    for (i = 0; i < secondSize; i++)
    {
        if (!firstOutput)
        {
            putchar(' ');
        }

        printf("%d", secondArray[i]);
        firstOutput = 0;
    }

    putchar('\n');

    return 0;
}
