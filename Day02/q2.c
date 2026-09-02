/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 02 Question: 2
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the area and circumference
 * of a circle given its radius.
 */

#include <stdio.h>

int main()
{
    float radius;
    float area, circumference;

    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    printf("Area=%.2f, Circumference=%.2f\n",
           area, circumference);

    return 0;
}
