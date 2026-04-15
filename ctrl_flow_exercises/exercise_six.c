#include <stdio.h>

//receive seconds and convert them to hours, mins and seconds

int main() {
    int timeInSeconds;
    int hours, minutes, remainingSeconds;

    printf("Please enter the time in seconds: ");
    scanf("%d", &timeInSeconds);

    hours = timeInSeconds / 3600;
    minutes = (timeInSeconds % 3600) / 60;
    remainingSeconds = (timeInSeconds % 3600) % 60;

    if (hours < 10) {
        printf("0");
    }
    printf("%d: ", hours);
        
    if (minutes < 10) {
        printf("0");
    }
    printf("%d: ", minutes);

    if (remainingSeconds < 10) {
        printf("0");
    }
    printf("%d\n\n", remainingSeconds );

    //printf("The time is = %d:%d:%d\n\n", hours, minutes, remainingSeconds);

    return 0;
}