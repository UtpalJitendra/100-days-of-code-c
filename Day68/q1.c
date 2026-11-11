/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 68
 * Question : 118
 *
 * PROBLEM STATEMENT:
 * Find the missing number from the integers 0 through n.
 *
 */
#include <stdio.h>
int main() {
    int a[100], n, i, missing;
    long long expected = 0, actual = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter %d array elements (range 0 to %d, one missing): ", n, n);
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); actual += a[i]; }
    expected = (long long)n * (n + 1) / 2;
    missing = (int)(expected - actual);
    printf("Missing number: %d", missing);
    return 0;
}
