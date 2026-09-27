/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 35
 * Question : 69
 *
 * Q69: Find the second largest element in an array.
 */

#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int largest, second;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}
