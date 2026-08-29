/*
Question Q40: Write a program to find the 1’s complement of a binary number and print it.

Official sample test cases:
Sample input: 1010\nSample output: 0101
Sample input: 1111\nSample output: 0000
*/

/* Question Q40 | Day 20 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    char binary[1001];

    if (scanf("%1000s", binary) != 1)
    {

        return 1;
    }
    for (int i = 0; binary[i] != '\0'; i++)
    {

        if (binary[i] != '0' && binary[i] != '1')
        {

            puts("Invalid binary number");

            return 0;
        }
        putchar(binary[i] == '0' ? '1': '0');
    }
    putchar('\n');

    return 0;
}
