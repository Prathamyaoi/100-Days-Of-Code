/*
Question Q59: Count even and odd numbers in an array.

Official sample test cases:
Sample input: 6
1 2 3 4 5 6\nSample output: Even=3, Odd=3
Sample input: 4
2 4 6 8\nSample output: Even=4, Odd=0
*/

/* Question Q59 | Day 30 | Topic: Arrays (1D) */

#include <stdio.h>
#define MAX_SIZE 1000

int main(void)
{

    int values[MAX_SIZE];
    int n;
    int even = 0;
    int odd = 0;

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
        if (values[i] % 2 == 0)
        {

            even++;
        }
        else
        {

            odd++;
        }
    }
    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
