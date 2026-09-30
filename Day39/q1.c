/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 39
 * Question : 77
 *
 * PROBLEM STATEMENT:
 * Check if the elements on the diagonal of a matrix are distinct.
 */

#include <stdio.h>

int main()
{
    int a[10][10], rows, cols;
    int i, j, distinct = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < rows; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
