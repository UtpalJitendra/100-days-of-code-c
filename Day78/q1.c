/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 78
 * Question : 128
 *
 * PROBLEM STATEMENT:
 * Count vowels and consonants in a text file, ignoring digits and special characters.
 *
 */
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    int ch, vowels = 0, consonants = 0;
    fp = fopen("text.txt", "r");
    if (fp == NULL) { printf("Error opening text.txt"); return 1; }
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            ch = tolower((unsigned char)ch);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d", vowels, consonants);
    return 0;
}
