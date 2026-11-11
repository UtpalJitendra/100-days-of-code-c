/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 76
 * Question : 126
 *
 * PROBLEM STATEMENT:
 * Check whether a file exists, then read and display its contents.
 *
 */
#include <stdio.h>
int main() {
    FILE *fp;
    char filename[100], line[256];
    printf("Enter filename: ");
    scanf("%99s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) { printf("Error: File does not exist!"); return 1; }
    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), fp) != NULL) printf("%s", line);
    fclose(fp);
    return 0;
}
