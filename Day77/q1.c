/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 77
 * Question : 127
 *
 * PROBLEM STATEMENT:
 * Convert lowercase letters in input.txt to uppercase and write output.txt.
 *
 */
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in, *out;
    int ch;
    in = fopen("input.txt", "r");
    if (in == NULL) { printf("Error opening input.txt"); return 1; }
    out = fopen("output.txt", "w");
    if (out == NULL) { fclose(in); printf("Error creating output.txt"); return 1; }
    while ((ch = fgetc(in)) != EOF) fputc(toupper((unsigned char)ch), out);
    fclose(in); fclose(out);
    printf("Conversion completed. Check output.txt");
    return 0;
}
