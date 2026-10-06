/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 44
 * Question : 88
 * Date : 06-10-2026
 *
 * PROBLEM STATEMENT:
 * Replace spaces with hyphens in a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    // Display updated string
    printf("%s", str);

    return 0;
}
