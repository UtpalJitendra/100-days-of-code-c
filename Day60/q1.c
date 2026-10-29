/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 60
 * Question : 110
 *
 * PROBLEM STATEMENT:
 * Find the maximum element in each subarray of size k
 * moving from left to right and print the results separated by spaces.
 */

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);

        if (i < n - k)
            printf(" ");
    }

    return 0;
}
