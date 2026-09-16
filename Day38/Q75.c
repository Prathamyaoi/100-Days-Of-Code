/*
Write a program to add two matrices.

Sample input: 2 2
1 2
3 4
2 2
5 6
7 8
Sample output: 6 8
10 12
*/

#include <stdio.h>

int main(void)
{
    int first[100][100];
    int second[100][100];
    int rows;
    int columns;
    int secondRows;
    int secondColumns;
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
            scanf("%d", &first[row][column]);
        }
    }

    if (scanf("%d %d", &secondRows, &secondColumns) != 2 || secondRows != rows || secondColumns != columns)
    {
        return 1;
    }

    for (row = 0; row < rows; row++)
    {
        for (column = 0; column < columns; column++)
        {
            scanf("%d", &second[row][column]);
        }
    }

    for (row = 0; row < rows; row++)
    {
        for (column = 0; column < columns; column++)
        {
            printf("%d", first[row][column] + second[row][column]);

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