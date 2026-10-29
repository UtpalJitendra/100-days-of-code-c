/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 49
 * Question : 97
 *
 * PROBLEM STATEMENT:
 * Print the initials of a name.
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];
    int i;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 && name[i] != ' ' && name[i] != '\n')
            printf("%c.", toupper(name[i]));

        else if (name[i - 1] == ' ' &&
                 name[i] != ' ' && name[i] != '\n')
            printf("%c.", toupper(name[i]));
    }

    return 0;
}
