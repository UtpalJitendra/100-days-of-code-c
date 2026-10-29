/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 55
 * Question : 105
 *
 * PROBLEM STATEMENT:
 * Find the majority element in an array. The majority
 * element appears strictly more than n/2 times.
 * Print -1 if no such element exists.
 */

#include <stdio.h>

int main()
{
    int nums[100], n, i, j;
    int count, majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }

        if (count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}
