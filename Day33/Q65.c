/*
Question Q65: Search in a sorted array using binary search.

Official sample test cases:
Sample input: 5
1 3 5 7 9
7
Sample output: Found at index 3

Sample input: 5
1 3 5 7 9
6
Sample output: -1
*/

/* Question Q65 | Day 33 | Topic: Arrays (1D) */

#include <stdio.h>

#define MAX_SIZE 1000

int main(void)
{
    int numbers[MAX_SIZE];
    int n;
    int target;
    int left;
    int right;
    int middle;
    int index = -1;
    int i;

    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    if (scanf("%d", &target) != 1)
    {
        return 1;
    }

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (numbers[middle] == target)
        {
            index = middle;
            break;
        }
        else if (numbers[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    if (index >= 0)
    {
        printf("Found at index %d\n", index);
    }
    else
    {
        puts("-1");
    }

    return 0;
}
