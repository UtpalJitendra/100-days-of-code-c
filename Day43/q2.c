/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 43
 * Question : 86
 *
 * PROBLEM STATEMENT:
 * Check if a string is a palindrome.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, palindrome = 1;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
