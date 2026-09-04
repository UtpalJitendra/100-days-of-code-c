/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 13 Question: 25
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to implement a basic calculator
 * using switch-case for +, -, *, /, %.
 */

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch (op)
    {
        case '+':
            printf("%d\n", a + b);
            break;

        case '-':
            printf("%d\n", a - b);
            break;

        case '*':
            printf("%d\n", a * b);
            break;

        case '/':
            printf("%d\n", a / b);
            break;

        case '%':
            printf("%d\n", a % b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}

