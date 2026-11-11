/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 87
 * Question : 137
 *
 * PROBLEM STATEMENT:
 * Create an enum for user roles ADMIN, USER, GUEST and display a message based on the role.
 *
 */
#include <stdio.h>
#include <string.h>
enum Role { ADMIN, USER, GUEST };
int main() {
    char input[20];
    enum Role role;
    printf("Enter role (ADMIN/USER/GUEST): ");
    scanf("%19s", input);
    if (!strcmp(input,"ADMIN")) role=ADMIN;
    else if (!strcmp(input,"USER")) role=USER;
    else if (!strcmp(input,"GUEST")) role=GUEST;
    else { printf("Invalid role"); return 1; }
    switch (role) {
        case ADMIN: printf("Welcome Admin!"); break;
        case USER: printf("Welcome User!"); break;
        case GUEST: printf("Welcome Guest!"); break;
    }
    return 0;
}
