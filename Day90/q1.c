/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 90
 * Question : 140
 *
 * PROBLEM STATEMENT:
 * Define a structure with an enum Gender and print a person's gender.
 *
 */
#include <stdio.h>
#include <string.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person { enum Gender gender; };
int main() {
    struct Person p;
    char input[20];
    printf("Enter gender (MALE/FEMALE/OTHER): ");
    scanf("%19s", input);
    if (!strcmp(input,"MALE")) p.gender=MALE;
    else if (!strcmp(input,"FEMALE")) p.gender=FEMALE;
    else if (!strcmp(input,"OTHER")) p.gender=OTHER;
    else { printf("Invalid gender"); return 1; }
    switch (p.gender) {
        case MALE: printf("Male"); break;
        case FEMALE: printf("Female"); break;
        case OTHER: printf("Other"); break;
    }
    return 0;
}
