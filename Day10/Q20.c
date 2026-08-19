/*
Question Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

Official sample test cases:
Sample input: 1\nSample output: Monday
Sample input: 5\nSample output: Friday
*/

/* Question Q20 | Day 10 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    int day;

    if (scanf("%d", &day) != 1)
    {

        return 1;
    }
    switch (day)
    {

        case 1:
            puts("Monday");

            break;

        case 2:
            puts("Tuesday");

            break;

        case 3:
            puts("Wednesday");

            break;

        case 4:
            puts("Thursday");

            break;

        case 5:
            puts("Friday");

            break;

        case 6:
            puts("Saturday");

            break;

        case 7:
            puts("Sunday");

            break;

        default:
            puts("Invalid day");
        }
    return 0;
}
