/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 49
 * Question : 98
 *
 * PROBLEM STATEMENT:
 * Print initials of a name with the surname displayed in full.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    int i, len, start;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';
    len = strlen(name);

    for (i = 0; i < len; i++)
    {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
        {
            start = i;

            while (name[i] != ' ' && name[i] != '\0')
                i++;

            if (name[i] == '\0')
            {
                printf("%s", &name[start]);
            }
            else
            {
                printf("%c.", toupper(name[start]));
            }

            if (name[i] == ' ')
                printf(" ");
        }
    }

    return 0;
}
