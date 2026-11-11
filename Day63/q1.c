/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 63
 * Question : 113
 *
 * PROBLEM STATEMENT:
 * Find the kth smallest element in an integer array.
 *
 */
#include <stdio.h>
int main() {
    int a[100], n, k, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    if (k < 1 || k > n) { printf("Invalid k"); return 0; }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
            }
    printf("Kth smallest element: %d", a[k - 1]);
    return 0;
}
