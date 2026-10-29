/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 56
 * Question : 106
 *
 * PROBLEM STATEMENT:
 * Find the next greater element for each element in an array.
 * Use the brute force approach (nested loops) without a stack.
 * Print the results in comma-separated format.
 */

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, next;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        next = -1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);

        if (i < n - 1)
            printf(", ");
    }

    return 0;
}
