/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 28
 * Question: 56
 *
 * PROBLEM STATEMENT:
 * Read and print elements of a one-dimensional array.
 */

#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
