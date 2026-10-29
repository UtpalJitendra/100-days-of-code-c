/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 59
 * Question : 109
 *
 * PROBLEM STATEMENT:
 * Find the maximum sum of all subarrays of size k.
 */

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, maxSum;

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

    maxSum = 0;

    for (i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    sum = maxSum;

    for (i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}
