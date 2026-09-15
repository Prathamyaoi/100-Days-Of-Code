/*
Write a program to find the transpose of a matrix.

Sample input: 2 3
1 2 3
4 5 6
Sample output: 1 4
2 5
3 6
*/

#include <stdio.h>

int main(void)
{
    int matrix[100][100];
    int rows;
    int columns;
    int row;
    int column;

    if (scanf("%d %d", &rows, &columns) != 2 || rows < 0 || rows > 100 || columns < 0 || columns > 100)
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

    for (column = 0; column < columns; column++)
    {
        for (row = 0; row < rows; row++)
        {
            printf("%d", matrix[row][column]);

            if (row == rows - 1)
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