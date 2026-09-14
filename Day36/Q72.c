/*
Question Q72: Find the sum of all elements in a matrix.

Official sample test case:
Sample input: 2 3
1 2 3
4 5 6
Sample output: 21
*/

/* Question Q72 | Day 36 | Topic: 2D Arrays */

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows;
    int columns;
    int sum = 0;
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
            sum += matrix[row][column];
        }
    }

    printf("%d\n", sum);

    return 0;
}
