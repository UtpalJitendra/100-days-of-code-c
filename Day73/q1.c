/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 73
 * Question : 123
 *
 * PROBLEM STATEMENT:
 * Count characters, words, and lines in sample.txt.
 *
 */
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    int ch, inWord = 0, chars = 0, words = 0, lines = 0, any = 0, last = '\n';
    fp = fopen("sample.txt", "r");
    if (fp == NULL) { printf("Error: Cannot open sample.txt"); return 1; }
    while ((ch = fgetc(fp)) != EOF) {
        chars++; any = 1; last = ch;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) inWord = 0;
        else if (!inWord) { words++; inWord = 1; }
    }
    if (any && last != '\n') lines++;
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d", chars, words, lines);
    return 0;
}
