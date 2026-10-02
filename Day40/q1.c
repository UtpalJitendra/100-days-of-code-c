/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 40
 * Question : 79
 *
 * PROBLEM STATEMENT:
 * Perform diagonal traversal of a matrix.
 */

#include <stdio.h>

int main()
{
    int a[10][10], rows, cols;
    int i, j, d;

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

    printf("Diagonal Traversal:\n");

    for (d = 0; d < rows + cols - 1; d++)
    {
        if (d % 2 == 0)
        {
            i = (d < rows) ? d : rows - 1;
            j = d - i;

            while (i >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            j = (d < cols) ? d : cols - 1;
            i = d - j;

            while (j >= 0 && i < rows)
            {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    printf("\n");

    return 0;
}
