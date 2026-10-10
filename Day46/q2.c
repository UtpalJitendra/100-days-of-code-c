/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 46
 * Question : 92
 *
 * PROBLEM STATEMENT:
 * Find the first repeating lowercase alphabet in a string.
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i, found = 0;
    int freq[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (freq[str[i] - 'a'] == 1)
            {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }

            freq[str[i] - 'a']++;
        }
    }

    if (!found)
    {
        printf("No repeating character\n");
    }

    return 0;
}
