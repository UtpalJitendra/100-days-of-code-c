/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 65
 * Question : 115
 *
 * PROBLEM STATEMENT:
 * Check whether two lowercase strings are anagrams.
 *
 */
#include <stdio.h>
int main() {
    char a[1000], b[1000];
    int count[26] = {0}, i, valid = 1;
    printf("Enter first string: ");
    scanf("%999s", a);
    printf("Enter second string: ");
    scanf("%999s", b);
    for (i = 0; a[i]; i++) if (a[i] >= 'a' && a[i] <= 'z') count[a[i]-'a']++;
    for (i = 0; b[i]; i++) if (b[i] >= 'a' && b[i] <= 'z') count[b[i]-'a']--;
    for (i = 0; i < 26; i++) if (count[i] != 0) valid = 0;
    printf("%s", valid ? "Anagram" : "Not Anagram");
    return 0;
}
