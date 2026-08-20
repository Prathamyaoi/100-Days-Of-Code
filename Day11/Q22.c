/*
Question Q22: Write a program to find profit or loss percentage given cost price and selling price.

Official sample test cases:
Sample input: 1000 1200\nSample output: Profit 20%
Sample input: 1000 800\nSample output: Loss 20%
Sample input: 1000 1000\nSample output: No Profit No Loss
*/

/* Question Q22 | Day 11 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{
    double cost;
    double sale;

    if (scanf("%lf %lf", &cost, &sale) != 2 || cost <= 0)
    {
        puts("Invalid cost price");
        return 0;
    }

    if (sale > cost)
    {
        printf("Profit %.0f%%\n", (sale - cost) * 100 / cost);
    }
    else if (sale < cost)
    {
        printf("Loss %.0f%%\n", (cost - sale) * 100 / cost);
    }
    else
    {
        puts("No Profit No Loss");
    }

    return 0;
}
