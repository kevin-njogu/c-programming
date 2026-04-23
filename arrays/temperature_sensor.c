#include <stdio.h>
#define SIZE 7


int main() {
    float temperatures[SIZE];
    float averageTemp;
    int highestTempIdx = 0, lowestTempIdx = 0;
    float sum = 0.0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter the temprature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
    }

    //Sum temp
    for (int i = 0; i < SIZE; i++) {
        sum += temperatures[i];

        if (temperatures[i] > temperatures[highestTempIdx]) {
            highestTempIdx = i;
        }

        if (temperatures[i] < temperatures[lowestTempIdx]) {
            lowestTempIdx = i;
        }
    }


    //Avg temp
    averageTemp = sum / SIZE;

    printf("Day %d was the hotest day of the week\n", highestTempIdx + 1);
    printf("Day %d was the coldest day of the week\n", lowestTempIdx + 1);
    printf("The average temperature of the week was %.2f\n", averageTemp);

    return 0;
}