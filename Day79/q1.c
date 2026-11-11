/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 79
 * Question : 129
 *
 * PROBLEM STATEMENT:
 * Read integers from numbers.txt and calculate their sum and average.
 *
 */
#include <stdio.h>
int main() {
    FILE *fp;
    int value, count = 0;
    long long sum = 0;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) { printf("Error opening numbers.txt"); return 1; }
    while (fscanf(fp, "%d", &value) == 1) { sum += value; count++; }
    fclose(fp);
    if (count == 0) { printf("No numbers found"); return 0; }
    printf("Sum = %lld\nAverage = %.2f", sum, (double)sum / count);
    return 0;
}
