/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 70
 * Question : 120
 *
 * PROBLEM STATEMENT:
 * Convert a string to title case (capitalize the first letter of each word).
 *
 */
#include <stdio.h>
int main() {
    char s[1000];
    int i, newWord = 1;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && newWord) s[i] -= 32;
        newWord = (s[i] == ' ' || s[i] == '\t' || s[i] == '\n');
    }
    printf("%s", s);
    return 0;
}
