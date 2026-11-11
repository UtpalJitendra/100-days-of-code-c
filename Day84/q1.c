/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 84
 * Question : 134
 *
 * PROBLEM STATEMENT:
 * Define an enum SUCCESS, FAILURE, and TIMEOUT and print the corresponding message.
 *
 */
#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main() {
    enum Status status;
    char input[20];
    printf("Enter status (SUCCESS/FAILURE/TIMEOUT): ");
    scanf("%19s", input);
    if (input[0]=='S') status=SUCCESS;
    else if (input[0]=='F') status=FAILURE;
    else if (input[0]=='T') status=TIMEOUT;
    else { printf("Invalid status"); return 1; }
    switch (status) {
        case SUCCESS: printf("Operation successful"); break;
        case FAILURE: printf("Operation failed"); break;
        case TIMEOUT: printf("Operation timed out"); break;
    }
    return 0;
}
