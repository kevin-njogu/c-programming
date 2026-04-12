#include <stdio.h>

int main() {
    int distance = 300; //KM
    int speed = 80; //KM/H
    int timeTakenInHours = distance / speed;

    float speedInMinutes = speed / 60.0; //KM/Min
    float remainingTimeTaken = (distance % speed) / speedInMinutes;

    printf("The time taken in hours was %d hrs and %.2f minutes\n\n", timeTakenInHours, remainingTimeTaken);

    return 0;
}