/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 04 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers without using a third variable.
 */

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);

    return 0;
}
