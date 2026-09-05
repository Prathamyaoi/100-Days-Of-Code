/*
Question Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Official sample test cases:
Sample input: \nSample output: Pattern with layers of stars as shown.
*/

/* Question Q54 | Day 27 | Topic: Nested loops */

#include <stdio.h>

int main(void)
{

    for (int row = 1; row <= 4; row++)
    {

        for (int s = 0; s < 4 - row; s++)
        {

            putchar(' ');
        }
        for (int col = 0; col < 2 * row - 1; col++)
        {

            putchar('*');
        }
        putchar('\n');
    }
    for (int row = 3; row >= 1; row--)
    {

        for (int s = 0; s < 4 - row; s++)
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
