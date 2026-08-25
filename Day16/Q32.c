/*
Question Q32: Write a program to check if a number is a palindrome.

Official sample test cases:
Sample input: 121\nSample output: Palindrome
Sample input: 123\nSample output: Not palindrome
*/

/* Question Q32 | Day 16 | Topic: Loops */

#include <stdio.h>

int main(void)
{

    long long n;
    long long original;
    long long reverse = 0;

    if (scanf("%lld", &n) != 1 || n < 0)
    {

        return 1;
    }
    original = n;

    do
    {

        reverse = reverse * 10 + n % 10;

        n /= 10;
    }
    while (n);

    puts(original == reverse ? "Palindrome": "Not palindrome");

    return 0;
}
