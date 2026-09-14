/*
Question Q71: Read and print a matrix.

Official sample test case:
Sample input: 2 2
1 2
3 4
Sample output: 1 2
3 4
*/

/* Question Q71 | Day 36 | Topic: 2D Arrays */

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows;
    int columns;
    int row;
    int column;

    if (scanf("%d %d", &rows, &columns) != 2 || rows < 0 || rows > MAX_SIZE || columns < 0 || columns > MAX_SIZE)
    {
        return 1;
    }

    for (row = 0; row < rows; row++)
    {
        for (column = 0; column < columns; column++)
        {
            scanf("%d", &matrix[row][column]);
        }
    }

    for (row = 0; row < rows; row++)
    {
        for (column = 0; column < columns; column++)
        {
            printf("%d", matrix[row][column]);

            if (column == columns - 1)
            {
                putchar('\n');
            }
            else
            {
                putchar(' ');
            }
        }
    }

    return 0;
}
