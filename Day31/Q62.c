/*
Question Q62: Reverse an array without taking extra space.

Official sample test cases:
Sample input: 4
1 2 3 4\nSample output: 4 3 2 1
*/

/* Question Q62 | Day 31 | Topic: Arrays (1D) */

#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{

    int values[MAX_SIZE];
    int n;
    int left;
    int right;

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
    }
    /* Swap matching elements from the two ends of the same array. */
    left = 0;
    right = n - 1;

    while (left < right)
    {
        int temp = values[left];

        values[left] = values[right];

        values[right] = temp;

        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {

        printf("%s%d", i ? " ": "", values[i]);
    }
    putchar('\n');

    return 0;
}
