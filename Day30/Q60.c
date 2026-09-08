/*
Question Q60: Count positive, negative, and zero elements in an array.

Official sample test cases:
Sample input: 5
-1 0 1 2 -2\nSample output: Positive=2, Negative=2, Zero=1
*/

/* Question Q60 | Day 30 | Topic: Arrays (1D) */

#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{
    int values[MAX_SIZE];
    int n;
    int positive = 0;
    int negative = 0;
    int zero = 0;

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

        if (values[i] > 0)
        {
            positive++;
        }
        else if (values[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

    return 0;
}
