/*
Question Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Official sample test cases:
Sample input: 4 2 +\nSample output: 6
Sample input: 10 3 %\nSample output: 1
Sample input: 15 5 /\nSample output: 3
*/

/* Question Q25 | Day 13 | Topic: Conditional statements */

#include <stdio.h>

int main(void)
{

    long long a;
    long long b;

    char op;

    if (scanf("%lld %lld %c", &a, &b, &op) != 3)
    {

        return 1;
    }
    switch (op)
    {

        case '+':
            printf("%lld\n", a + b);

            break;

        case '-':
            printf("%lld\n", a - b);

            break;

        case '*':
            printf("%lld\n", a * b);

            break;

        case '/':
            if (b == 0)
            {

                puts("Division by zero");
            }
        else
        {

            printf("%lld\n", a / b);
        }
        break;

        case '%':
            if (b == 0)
            {

                puts("Modulo by zero");
            }
        else
        {

            printf("%lld\n", a % b);
        }
        break;

        default:
            puts("Invalid operator");
        }
    return 0;
}
