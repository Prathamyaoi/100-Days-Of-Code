/*
Question Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Official sample test cases:
Sample input: \nSample output: *
***
*****
*******
*********
*******
*****
***
*
*/

/* Question Q53 | Day 27 | Topic: Nested loops */

#include <stdio.h>

int main(void)
{

    for (int row = 1; row <= 5; row++)
    {

        for (int col = 0; col < 2 * row - 1; col++)
        {

            putchar('*');
        }
        putchar('\n');
    }
    for (int row = 4; row >= 1; row--)
    {

        for (int col = 0; col < 2 * row - 1; col++)
        {

            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
