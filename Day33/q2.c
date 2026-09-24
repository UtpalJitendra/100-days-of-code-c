/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 33
 * Question : 66
 * Date : 24-09-2026
 *
 * Q66: Insert an element in a sorted array at the appropriate position.
 */

#include <stdio.h>

int main()
{
    int n, i, j, element;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    i = n - 1;

    while (i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;

    for (j = 0; j <= n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}
