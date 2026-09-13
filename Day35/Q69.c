/*
Question Q69: Find the second largest element in an array.

Official sample test case:
Sample input: 5
10 20 30 40 50
Sample output: 40
*/

/* Question Q69 | Day 35 | Topic: Arrays (1D) */

#include <stdio.h>

#define MAX_SIZE 1000

int main(void)
{
    int numbers[MAX_SIZE];
    int n;
    int largest;
    int secondLargest;
    int foundSecond = 0;
    int i;

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];

    for (i = 1; i < n; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (numbers[i] < largest && (!foundSecond || numbers[i] > secondLargest))
        {
            secondLargest = numbers[i];
            foundSecond = 1;
        }
    }

    if (foundSecond)
    {
        printf("%d\n", secondLargest);
    }
    else
    {
        puts("No second distinct largest element");
    }

    return 0;
}
