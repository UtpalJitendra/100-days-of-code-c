/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 91
 * Question : 141
 *
 * PROBLEM STATEMENT:
 * Define a Student structure with name, roll number, and marks; read and print one student's data.
 *
 */
#include <stdio.h>
struct Student {
    char name[100];
    int roll_no;
    float marks;
};
int main() {
    struct Student s;
    printf("Enter name: ");
    scanf(" %99[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Name: %s | Roll: %d | Marks: %.2f", s.name, s.roll_no, s.marks);
    return 0;
}
