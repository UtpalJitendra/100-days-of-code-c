/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 71
 * Question : 121
 *
 * PROBLEM STATEMENT:
 * Write the user's name and age to info.txt using fprintf().
 *
 */
#include <stdio.h>
int main() {
    char name[100];
    int age;
    FILE *fp;
    printf("Enter name: ");
    scanf(" %99[^\n]", name);
    printf("Enter age: ");
    scanf("%d", &age);
    fp = fopen("info.txt", "w");
    if (fp == NULL) { printf("Error creating file"); return 1; }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
