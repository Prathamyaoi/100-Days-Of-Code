/*
Question Q47: Write a program to print the following pattern:
*
**
***
****
*****

Official sample test cases:
Sample input: \nSample output: *
**
***
****
*****
*/

/* Question Q47 | Day 24 | Topic: Nested loops */

#include <stdio.h>

int main(void)
{

    for (int row = 1; row <= 5; row++)
    {

        for (int col = 1; col <= row; col++)
        {

            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
