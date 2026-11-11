/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 64
 * Question : 114
 *
 * PROBLEM STATEMENT:
 * Find the length of the longest substring without repeating characters.
 *
 */
#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int last[256], i, start = 0, maxLen = 0, len;
    printf("Enter a string: ");
    scanf("%999s", s);
    for (i = 0; i < 256; i++) last[i] = -1;
    len = (int)strlen(s);
    for (i = 0; i < len; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > maxLen) maxLen = i - start + 1;
    }
    printf("Length: %d", maxLen);
    return 0;
}
