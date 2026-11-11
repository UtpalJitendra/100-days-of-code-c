/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 74
 * Question : 124
 *
 * PROBLEM STATEMENT:
 * Copy all content from a source file to a destination file using fgetc() and fputc().
 *
 */
#include <stdio.h>
int main() {
    FILE *src, *dest;
    char source[100], destination[100];
    int ch;
    printf("Enter source filename: ");
    scanf("%99s", source);
    printf("Enter destination filename: ");
    scanf("%99s", destination);
    src = fopen(source, "r");
    if (src == NULL) { printf("Error opening source file"); return 1; }
    dest = fopen(destination, "w");
    if (dest == NULL) { fclose(src); printf("Error creating destination file"); return 1; }
    while ((ch = fgetc(src)) != EOF) fputc(ch, dest);
    fclose(src); fclose(dest);
    printf("File copied successfully to %s", destination);
    return 0;
}
