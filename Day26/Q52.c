/*
Question Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Official sample test cases:
Sample input: \nSample output: Pattern with stars spaced irregularly as shown.
*/

/* Question Q52 | Day 26 | Topic: Nested loops */

#include <stdio.h>

int main(void)
{

    /* The source page shows irregular spacing; this is the standard centered star-pyramid interpretation. */
    for (int row = 1; row <= 5; row++)
    {

        for (int s = 0; s < 5 - row; s++)
        {

            putchar(' ');
        }
        for (int col = 0; col < 2 * row - 1; col++)
        {

            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
