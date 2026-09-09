/*
Question Q61: Search for an element in an array using linear search.

Official sample test cases:
Sample input: 5
1 2 3 4 5
3\nSample output: Found at index 2
Sample input: 4
10 20 30 40
25\nSample output: -1
*/

/* Question Q61 | Day 31 | Topic: Arrays (1D) */

#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{

    int values[MAX_SIZE];
    int n;
    int target;
    int index = - 1;

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
    if (scanf("%d", &target) != 1)
    {

        return 1;
    }
    for (int i = 0; i < n; i++)
    {

        if (values[i] == target)
        {

            index = i;

            break;
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
