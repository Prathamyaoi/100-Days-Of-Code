/*
Question Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Official sample test cases:
Sample input: 2020\nSample output: Leap year
Sample input: 1900\nSample output: Not a leap year
Sample input: 2000\nSample output: Leap year
*/

/* Question Q13 | Day 07 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    int year;

    if (scanf("%d", &year) != 1)
    {

        return 1;
    }
    /* A leap year is divisible by 400, or by 4 but not by 100. */
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        puts("Leap year");
    }
    else
    {
        puts("Not a leap year");
    }

    return 0;
}
