/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 67
 * Question : 117
 *
 * PROBLEM STATEMENT:
 * Merge two sorted arrays into one sorted array.
 *
 */
#include <stdio.h>
int main() {
    int a[100], b[100], c[200], m, n, i, j, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter second sorted array: ");
    for (i = 0; i < n; i++) scanf("%d", &b[i]);
    i = 0; j = 0;
    while (i < m && j < n) c[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];
    printf("Merged array: ");
    for (i = 0; i < k; i++) printf("%d ", c[i]);
    return 0;
}
