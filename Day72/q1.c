/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 72
 * Question : 122
 *
 * PROBLEM STATEMENT:
 * Read and display all lines from info.txt using fgets() until EOF.
 *
 */
#include <stdio.h>
int main() {
    FILE *fp;
    char line[256];
    fp = fopen("info.txt", "r");
    if (fp == NULL) { printf("Error: File does not exist!"); return 1; }
    while (fgets(line, sizeof(line), fp) != NULL) printf("%s", line);
    fclose(fp);
    return 0;
}
