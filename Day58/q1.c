/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 58
 * Question : 108
 *
 * PROBLEM STATEMENT:
 * Print an answer array where answer[i] is the product
 * of all elements of nums except nums[i].
 */

#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, product = 1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        product = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
                product *= nums[j];
        }

        answer[i] = product;
    }

    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(",");
    }
    printf("]");

    return 0;
}
