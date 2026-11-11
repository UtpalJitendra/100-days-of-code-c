/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 88
 * Question : 138
 *
 * PROBLEM STATEMENT:
 * Print all enum names and integer values using a loop.
 *
 */
#include <stdio.h>
enum Color { RED, YELLOW, GREEN };
int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    int i;
    for (i = RED; i <= GREEN; i++)
        printf("%s=%d\n", names[i], i);
    return 0;
}
