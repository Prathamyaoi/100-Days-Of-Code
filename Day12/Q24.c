/*
Question Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Official sample test cases:
Sample input: 50\nSample output: Bill: ₹250
Sample input: 150\nSample output: Bill: ₹850
Sample input: 250\nSample output: Bill: ₹1700
*/

/* Question Q24 | Day 12 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    int units;

    long long bill = 0;

    if (scanf("%d", &units) != 1 || units < 0)
    {

        return 1;
    }

    /* Apply the price one slab at a time. */
    if (units <= 100)
    {

        bill = units * 5;
    }
    else
    {

        bill = 500;

        units -= 100;

        if (units <= 100)
        {

            bill += units * 7;
        }
        else
        {

            bill += 700;

            units -= 100;

            if (units <= 100)
            {

                bill += units * 10;
            }
            else
            {

                bill += 1000 + (units - 100) * 12;
            }
        }
    }
    printf("Bill: ₹%lld\n", bill);

    return 0;
}
