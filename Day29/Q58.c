/*
Question Q58: Find the maximum and minimum element in an array.

Official sample test cases:
Sample input: 5
2 9 1 4 7\nSample output: Max=9, Min=1
Sample input: 3
10 10 10\nSample output: Max=10, Min=10
*/

/* Question Q58 | Day 29 | Topic: Arrays (1D) */

#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{

    int values[MAX_SIZE];
    int n;

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE)
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
    int max = values[0];
    int min = values[0];

    for (int i = 1; i < n; i++)
    {

        if (values[i] > max)
        {

            max = values[i];
        }
        if (values[i] < min)
        {

            min = values[i];
        }
    }
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
