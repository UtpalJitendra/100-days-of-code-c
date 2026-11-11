/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 75
 * Question : 125
 *
 * PROBLEM STATEMENT:
 * Append a new line of text to an existing file without overwriting it.
 *
 */
#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100], line[500];
    printf("Enter filename: ");
    scanf("%99s", filename);
    getchar();
    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);
    fp = fopen(filename, "a");
    if (fp == NULL) { printf("Error opening file"); return 1; }
    fputs(line, fp);
    fclose(fp);
    printf("File updated successfully with appended text.");
    return 0;
}
