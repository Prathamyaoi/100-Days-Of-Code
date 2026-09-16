/*
Write a program to check if a matrix is symmetric.

Sample input 1: 2 2
1 2
2 1
Sample output 1: True

Sample input 2: 2 2
1 0
2 1
Sample output 2: False
*/

#include <stdio.h>

int main(void)
{
    int matrix[100][100];
    int rows;
    int columns;
    int row;
    int column;
    int symmetric = 1;

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

    if (rows != columns)
    {
        symmetric = 0;
    }
    else
    {
        for (row = 0; row < rows; row++)
        {
            for (column = row + 1; column < columns; column++)
            {
                if (matrix[row][column] != matrix[column][row])
                {
                    symmetric = 0;
                }
            }
        }
    }

    if (symmetric)
    {
        puts("True");
    }
    else
    {
        puts("False");
    }

    return 0;
}