/*
Question Q48: Write a program to print the following pattern:
1
12
123
1234
12345

Official sample test cases:
Sample input: \nSample output: 1
12
123
1234
12345
*/

/* Question Q48 | Day 24 | Topic: Nested loops */

#include <stdio.h>

int main(void)
{

    for (int row = 1; row <= 5; row++)
    {

        for (int col = 1; col <= row; col++)
        {

            printf("%d", col);
        }
        putchar('\n');
    }
    return 0;
}
