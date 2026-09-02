/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 05 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate simple and compound interest
 * for given principal, rate, and time.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time;
    double simple_interest, compound_interest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;

    compound_interest =
        principal * pow(1 + rate / 100, time) - principal;

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n",
           simple_interest, compound_interest);

    return 0;
}
