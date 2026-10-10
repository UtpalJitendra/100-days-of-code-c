/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 47
 * Question : 94
 *
 * PROBLEM STATEMENT:
 * Find the longest word in a sentence.
 */

#include <stdio.h>

int main()
{
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
            len++;
        }
        else
        {
            word[j] = '\0';

            if (len > max)
            {
                max = len;
                for (int k = 0; k <= j; k++)
                {
                    longest[k] = word[k];
                }
            }

            j = 0;
            len = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("%s\n", longest);

    return 0;
}
