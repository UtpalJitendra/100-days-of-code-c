/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 07 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input a year and check whether it is
 * a leap year or not using conditional statements.
 */

#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("Not a leap year\n");
    }
    else if (year % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}
