/*
Question Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Official sample test cases:
Sample input: \nSample output: 5
45
345
2345
12345
*/

/* Question Q49 | Day 25 | Topic: Nested loops */

#include <stdio.h>

int main(void)
{

    for (int row = 1; row <= 5; row++)
    {

        for (int col = 6 - row; col <= 5; col++)
        {

            printf("%d", col);
        }
        putchar('\n');
    }
    return 0;
}
