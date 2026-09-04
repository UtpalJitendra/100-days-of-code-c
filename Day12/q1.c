/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 04 Question: 23
 * Date : 04-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate library fine based on late days.
 */

#include <stdio.h>

int main()
{
    int days, fine;

    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 10)
    {
        fine = 10 + (days - 5) * 4;
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 30)
    {
        fine = 30 + (days - 10) * 6;
        printf("Fine ₹%d\n", fine);
    }
    else
    {
        printf("Membership Cancelled\n");
    }

    return 0;
}
