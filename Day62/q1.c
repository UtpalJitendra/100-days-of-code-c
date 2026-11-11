
/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 62
 * Question : 112
 *
 * PROBLEM STATEMENT:
 * Find the maximum sum of any contiguous subarray
 * using Kadane's algorithm.
 *
 * If all elements are negative, print the largest
 * (least negative) element.
 *
 */

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int maxSum, currentSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    maxSum = arr[0];
    currentSum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum: %d", maxSum);

    return 0;
}
