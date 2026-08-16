/*
Question Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Official sample test cases:
Sample input: a\nSample output: Vowel
Sample input: b\nSample output: Consonant
*/

/* Question Q14 | Day 07 | Topic: Conditional statements */

#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char ch;

    if (scanf(" %c", &ch) != 1)
    {

        return 1;
    }
    ch = (char) tolower((unsigned char) ch);

    puts(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ? "Vowel": "Consonant");

    return 0;
}
