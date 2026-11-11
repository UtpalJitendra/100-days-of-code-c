/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 66
 * Question : 116
 *
 * PROBLEM STATEMENT:
 * Find two distinct indices whose array elements add up to a target.
 *
 */
#include <stdio.h>
int main() {
    int a[100], n, target, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter target: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] + a[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
    printf("-1 -1");
    return 0;
}
