/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 81
 * Question : 131
 *
 * PROBLEM STATEMENT:
 * Create an enum for days Sunday to Saturday and print each day with its integer value.
 *
 */
#include <stdio.h>
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
int main() {
    printf("SUNDAY = %d\nMONDAY = %d\nTUESDAY = %d\nWEDNESDAY = %d\nTHURSDAY = %d\nFRIDAY = %d\nSATURDAY = %d",
           SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY);
    return 0;
}
