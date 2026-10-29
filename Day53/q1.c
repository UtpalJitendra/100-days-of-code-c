/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 53
 * Question : 103
 *
 * PROBLEM STATEMENT:
 * Find the leftmost pivot index of an array where the sum
 * of elements on the left equals the sum of elements on
 * the right. Print -1 if no pivot index exists.
 */

#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int totalSum = 0, leftSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++)
    {
        if (leftSum == totalSum - leftSum - nums[i])
        {
            printf("%d", i);
            return 0;
        }

        leftSum += nums[i];
    }

    printf("-1");

    return 0;
}
