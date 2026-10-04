/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 41
 * Question : 82
 *
 * PROBLEM STATEMENT:
 * Print each character of a string on a new line.
 */


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
