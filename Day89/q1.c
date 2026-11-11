/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 89
 * Question : 139
 *
 * PROBLEM STATEMENT:
 * Show that enum constants are stored as integers by printing their assigned values.
 *
 */
#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
