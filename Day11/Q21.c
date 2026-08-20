/*
Question Q21: Write a program to display the month name and number of days using switch-case for a given month number.

Official sample test cases:
Sample input: 2\nSample output: February, 28 days
Sample input: 12\nSample output: December, 31 days
*/

/* Question Q21 | Day 11 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    int month;

    if (scanf("%d", &month) != 1)
    {

        return 1;
    }
    switch (month)
    {

        case 1:
            puts("January, 31 days");

            break;

        case 2:
            puts("February, 28 days");

            break;

        case 3:
            puts("March, 31 days");

            break;

        case 4:
            puts("April, 30 days");

            break;

        case 5:
            puts("May, 31 days");

            break;

        case 6:
            puts("June, 30 days");

            break;

        case 7:
            puts("July, 31 days");

            break;

        case 8:
            puts("August, 31 days");

            break;

        case 9:
            puts("September, 30 days");

            break;

        case 10:
            puts("October, 31 days");

            break;

        case 11:
            puts("November, 30 days");

            break;

        case 12:
            puts("December, 31 days");

            break;

        default:
            puts("Invalid month");
        }
    return 0;
}
