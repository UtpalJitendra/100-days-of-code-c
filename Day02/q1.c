/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 02 Question: 1
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the area and perimeter
 * of a rectangle given its length and breadth.
 */

#include <stdio.h>

int main()
{
    int length, breadth;

    scanf("%d %d", &length, &breadth);

    printf("Area=%d, Perimeter=%d\n",
           length * breadth,
           2 * (length + breadth));

    return 0;
}
