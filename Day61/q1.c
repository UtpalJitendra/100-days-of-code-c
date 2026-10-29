/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 61
 * Question : 111
 *
 * PROBLEM STATEMENT:
 * Find the first negative integer in each subarray of size k.
 * If no negative integer exists, print 0.
 * Print the results separated by spaces.
 */

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, first;

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
        first = 0;

        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                first = arr[j];
                break;
            }
        }

        printf("%d", first);

        if (i < n - k)
            printf(" ");
    }

    return 0;
}
