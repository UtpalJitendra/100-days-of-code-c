/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 69
 * Question : 119
 *
 * PROBLEM STATEMENT:
 * Find the one repeated element in an integer array in one traversal.
 *
 */
#include <stdio.h>
#define SIZE 200003

int hashValue(int value) {
    unsigned int x = (unsigned int)value;
    x ^= x >> 16;
    x *= 0x7feb352dU;
    x ^= x >> 15;
    x *= 0x846ca68bU;
    x ^= x >> 16;
    return (int)(x % SIZE);
}

int main() {
    int seen[SIZE] = {0};
    int keys[SIZE];
    int n, i, value, index;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        index = hashValue(value);
        while (seen[index] && keys[index] != value)
            index = (index + 1) % SIZE;
        if (seen[index]) {
            printf("Repeated element: %d", value);
            return 0;
        }
        seen[index] = 1;
        keys[index] = value;
    }
    printf("No repeated element found");
    return 0;
}
