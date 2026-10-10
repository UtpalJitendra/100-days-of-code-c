/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 47
 * Question : 93
 *
 * PROBLEM STATEMENT:
 * Check if two strings are anagrams of each other.
 */

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
