/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 03 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to convert temperature from Celsius to Fahrenheit.
 */

#include <stdio.h>

int main()
{
    int celsius, fahrenheit;

    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit=%d\n", fahrenheit);

    return 0;
}
