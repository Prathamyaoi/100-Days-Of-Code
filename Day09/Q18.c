/*
Question Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Official sample test cases:
Sample input: 95\nSample output: Grade A
Sample input: 82\nSample output: Grade B
Sample input: 68\nSample output: Grade D
Sample input: 50\nSample output: Grade F
*/

/* Question Q18 | Day 09 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{
    double p;

    if (scanf("%lf", &p) != 1 || p < 0 || p > 100)
    {
        puts("Invalid percentage");
        return 0;
    }

    if (p >= 90)
    {
        puts("Grade A");
    }
    else if (p >= 80)
    {
        puts("Grade B");
    }
    else if (p >= 70)
    {
        puts("Grade C");
    }
    else if (p >= 60)
    {
        puts("Grade D");
    }
    else
    {
        puts("Grade F");
    }

    return 0;
}
