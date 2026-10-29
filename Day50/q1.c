/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 50
 * Question : 99
 *
 * PROBLEM STATEMENT:
 * Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */

#include <stdio.h>

int main()
{
    char date[20];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%19s", date);

    if (date[3] == '0' && date[4] == '4')
    {
        printf("%.2s-Apr-%s", date, date + 6);
    }
    else
    {
        printf("Invalid month");
    }

    return 0;
}
