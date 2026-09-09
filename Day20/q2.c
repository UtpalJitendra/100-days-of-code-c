/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 20 Question: 40
 * Date : 10-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the 1's complement of a binary
 * number and print it.
 */

#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }
    }

    printf("%s\n", binary);

    return 0;
}
