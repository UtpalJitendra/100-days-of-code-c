/* 
 * Name : Utpal Jitendra 
 * Roll : 590041777 
 * Day  : 29 
 * Question: 58 
 * 
 * PROBLEM STATEMENT: 
 * Find the maximum and minimum element in an array. 
 */ 
 
#include <stdio.h> 
 
int main() 
{ 
    int n, i; 
    int arr[100]; 
    int max, min; 
 
    scanf("%d", &n);  
    for (i = 0; i < n; i++) 
    { 
        scanf("%d", &arr[i]); 
    } 

    max = arr[0]; 
    min = arr[0]; 
    for (i = 1; i < n; i++) 
    { 
        if (arr[i] > max) 
        { 
            max = arr[i]; 
        } 
 
        if (arr[i] < min) 
        { 
            min = arr[i]; 
        } 
    } 
 
    printf("Max=%d, Min=%d\n", max, min); 
     return 0; 
}
