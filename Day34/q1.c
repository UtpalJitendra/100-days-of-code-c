/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 34
 * Question : 67
 * Date : 26-09-2026
 *
 * PROBLEM STATEMENT:
 * Insert an element in an array at a given position.
 */

#include <stdio.h>

int main() {
    int n, i, pos, element;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &element);

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = element;
    n++;

    // Display updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
