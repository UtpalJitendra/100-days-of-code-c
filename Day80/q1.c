/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 80
 * Question : 130
 *
 * PROBLEM STATEMENT:
 * Store student records in a file using fprintf(), then read them using fscanf().
 *
 */
#include <stdio.h>
int main() {
    FILE *fp;
    char name[5][100];
    int roll[5], marks[5], n, i;
    printf("Enter number of students (max 5): ");
    scanf("%d", &n);
    if (n < 1 || n > 5) { printf("Invalid number"); return 1; }
    fp = fopen("students.txt", "w");
    if (fp == NULL) { printf("Error creating file"); return 1; }
    for (i = 0; i < n; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%99s%d%d", name[i], &roll[i], &marks[i]);
        fprintf(fp, "%s %d %d\n", name[i], roll[i], marks[i]);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) { printf("Error reading file"); return 1; }
    while (fscanf(fp, "%99s%d%d", name[0], &roll[0], &marks[0]) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", name[0], roll[0], marks[0]);
    fclose(fp);
    return 0;
}
