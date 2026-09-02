/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 03 Question: 2
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers using a third variable.
 */

#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d\n", a, b);

    return 0;
}
