/* * Name : Utpal Jitendra * Roll : 590041777 * Day : 50 * Question 
 : 100 * * PROBLEM STATEMENT: * Print all sub-strings of a string. 
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if (i != len - 1 || j != len - 1)
                printf(",");
        }
    }

    return 0;
}
