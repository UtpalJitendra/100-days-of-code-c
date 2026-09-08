/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 16 Question: 32
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is a palindrome.
 */

#include <stdio.h>

int main()
{
    int n, original, reverse = 0, remainder;

    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}
