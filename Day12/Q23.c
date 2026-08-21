/*
Question Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Official sample test cases:
Sample input: 4\nSample output: Fine ₹8
Sample input: 8\nSample output: Fine ₹22
Sample input: 15\nSample output: Fine ₹60
Sample input: 31\nSample output: Membership Cancelled
*/

/* Question Q23 | Day 12 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{
    int days;

    if (scanf("%d", &days) != 1 || days < 0)
    {
        return 1;
    }

    if (days > 30)
    {
        puts("Membership Cancelled");
    }
    else if (days <= 5)
    {
        printf("Fine ₹%d\n", days * 2);
    }
    else if (days <= 10)
    {
        printf("Fine ₹%d\n", 5 * 2 + (days - 5) * 4);
    }
    else
    {
        printf("Fine ₹%d\n", 5 * 2 + 5 * 4 + (days - 10) * 6);
    }

    return 0;
}
