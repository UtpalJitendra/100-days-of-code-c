/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 35
 * Question : 69
 * Date : 27-09-2026
 *
 * PROBLEM STATEMENT:
 * Find the second largest element in an array.
 */

#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int largest, secondLargest;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    secondLargest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}
