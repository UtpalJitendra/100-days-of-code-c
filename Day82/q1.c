/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 82
 * Question : 132
 *
 * PROBLEM STATEMENT:
 * Use a traffic-light enum to print Stop, Wait, or Go.
 *
 */
#include <stdio.h>
#include <string.h>
enum TrafficLight { RED, YELLOW, GREEN };
int main() {
    char input[20];
    enum TrafficLight light;
    printf("Enter traffic light (RED/YELLOW/GREEN): ");
    scanf("%19s", input);
    if (strcmp(input, "RED") == 0) light = RED;
    else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(input, "GREEN") == 0) light = GREEN;
    else { printf("Invalid traffic light"); return 1; }
    switch (light) {
        case RED: printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN: printf("Go"); break;
    }
    return 0;
}
