#include <stdio.h>

int main() {
    int days = 30;
    float finalAmount = 0.01;


    for (int i = 1; i <= 30; i++) {
        printf("Day %d: Amount %.2f\n", i, finalAmount);
        finalAmount = finalAmount * 2;
    }

    printf("Final amount after 30 days is: %.2f\n", finalAmount);
}