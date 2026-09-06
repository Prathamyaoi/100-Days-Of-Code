/*
Question Q56: Read and print elements of a one-dimensional array.

Official sample test cases:
Sample input: 3
10 20 30\nSample output: 10 20 30
Sample input: 5
1 2 3 4 5\nSample output: 1 2 3 4 5
*/

/* Question Q56 | Day 28 | Topic: Nested loops */

#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{

    int values[MAX_SIZE];
    int n;

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
    for (int i = 0; i < n; i++)
    {

        printf("%s%d", i ? " ": "", values[i]);
    }
    putchar('\n');

    return 0;
}
