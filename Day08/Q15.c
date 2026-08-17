/*
Question Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Official sample test cases:
Sample input: A\nSample output: Uppercase alphabet
Sample input: a\nSample output: Lowercase alphabet
Sample input: 3\nSample output: Digit
Sample input: #\nSample output: Special character
*/

/* Question Q15 | Day 08 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{
    char ch;

    if (scanf(" %c", &ch) != 1)
    {
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z')
    {
        puts("Uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        puts("Lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        puts("Digit");
    }
    else
    {
        puts("Special character");
    }

    return 0;
}
