/*
Write a program to find the sum of each row of a matrix and store it in an array.

Sample input: 2 3
1 2 3
4 5 6
Sample output: 6 15
*/

#include <stdio.h>

int main(void)
{
    int matrix[100][100];
    int rowSums[100];
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
        rowSums[row] = 0;

        for (column = 0; column < columns; column++)
        {
            scanf("%d", &matrix[row][column]);
            rowSums[row] += matrix[row][column];
        }
    }

    for (row = 0; row < rows; row++)
    {
        printf("%d", rowSums[row]);

        if (row == rows - 1)
        {
            putchar('\n');
        }
        else
        {
            putchar(' ');
        }
    }

    return 0;
}