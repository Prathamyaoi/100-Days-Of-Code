/*
Question Q41: Write a program to swap the first and last digit of a number.

Official sample test cases:
Sample input: 1234\nSample output: 4231
Sample input: 1001\nSample output: 1001
*/

/* Question Q41 | Day 21 | Topic: Loops */

#include <stdio.h>
#include <string.h>

int main(void)
{

    char number[1002];

    if (scanf("%1001s", number) != 1)
    {

        return 1;
    }
    int last = 0;

    while (number[last] != '\0')
    {
        last++;
    }

    last--;

    char temp = number[0];

    number[0] = number[last];

    number[last] = temp;

    puts(number);

    return 0;
}
