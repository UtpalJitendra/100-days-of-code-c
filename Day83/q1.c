/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 83
 * Question : 133
 *
 * PROBLEM STATEMENT:
 * Create an enum for months and print how many days each month has.
 *
 */
#include <stdio.h>
#include <string.h>
enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
int main() {
    char name[20];
    enum Month month;
    printf("Enter month (JAN/FEB/MAR/APR/MAY/JUN/JUL/AUG/SEP/OCT/NOV/DEC): ");
    scanf("%19s", name);
    if (!strcmp(name,"JAN")) month=JAN; else if (!strcmp(name,"FEB")) month=FEB;
    else if (!strcmp(name,"MAR")) month=MAR; else if (!strcmp(name,"APR")) month=APR;
    else if (!strcmp(name,"MAY")) month=MAY; else if (!strcmp(name,"JUN")) month=JUN;
    else if (!strcmp(name,"JUL")) month=JUL; else if (!strcmp(name,"AUG")) month=AUG;
    else if (!strcmp(name,"SEP")) month=SEP; else if (!strcmp(name,"OCT")) month=OCT;
    else if (!strcmp(name,"NOV")) month=NOV; else if (!strcmp(name,"DEC")) month=DEC;
    else { printf("Invalid month"); return 1; }
    if (month == FEB) printf("28 or 29 days");
    else if (month==APR || month==JUN || month==SEP || month==NOV) printf("30 days");
    else printf("31 days");
    return 0;
}
