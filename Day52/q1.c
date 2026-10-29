/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 52
 * Question : 102
 *
 * PROBLEM STATEMENT:
 * Find the index of the smallest element greater than
 * or equal to x in a sorted array. Print -1 if it
 * does not exist. Return the first occurrence.
 */

#include <stdio.h>

int main()
{
    int arr[100], n, x, i, index = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}
