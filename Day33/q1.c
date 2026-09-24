/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 33
 * Question : 65
 * Date : 24-09-2026
 *
 * Q65: Search in a sorted array using binary search.
 */

#include <stdio.h>

int main()
{
    int n, i, key;
    int low, high, mid;
    int found = -1;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}
