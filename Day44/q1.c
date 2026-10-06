/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 44
 * Question : 87
 * Date : 06-10-2026
 *
 * PROBLEM STATEMENT:
 * Count spaces, digits, and special characters in a string.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Count spaces, digits and special characters
    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z') ||
                   str[i] == '\n')) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
