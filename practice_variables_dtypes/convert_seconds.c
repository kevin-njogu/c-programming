#include <stdio.h>

int main() {
    int timeInSeconds, hours, minutes, remainingSeconds;

    printf("Please enter the time in seconds here: ");
    scanf("%d", &timeInSeconds);

    hours = timeInSeconds / (60 * 60); //60 * 60 --> number of seconds in an hour
    minutes = (timeInSeconds % (60 * 60)) / 60; //60 --> number of seconds in a minute
    remainingSeconds = (timeInSeconds % (60 * 60)) % 60;

    printf("The entered time in seconds is equal to %dhrs - %dmins - %dsecs\n\n", hours, minutes, remainingSeconds);

    return 0;

}