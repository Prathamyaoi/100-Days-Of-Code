/*
Question Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Official sample test cases:
Sample input: \nSample output: *****
 ****
  ***
   **
    *
Sample input: \nSample output: Note: Spaces indicate indentation.
*/

/* Question Q50 | Day 25 | Topic: Nested loops */

#include <stdio.h>

int main(void)
{

    for (int row = 0; row < 5; row++)
    {

        for (int s = 0; s < row; s++)
        {

            putchar(' ');
        }
        for (int col = 5; col > row; col--)
        {

            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
