/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 11 Question: 2
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find profit or loss percentage
 * given cost price and selling price.
 */

#include <stdio.h>

int main()
{
    float cost_price, selling_price, percentage;

    scanf("%f %f", &cost_price, &selling_price);

    if (selling_price > cost_price)
    {
        percentage = ((selling_price - cost_price) / cost_price) * 100;
        printf("Profit %.0f%%\n", percentage);
    }
    else if (selling_price < cost_price)
    {
        percentage = ((cost_price - selling_price) / cost_price) * 100;
        printf("Loss %.0f%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}
