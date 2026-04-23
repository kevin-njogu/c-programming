#include <stdio.h>

int main() {
    int tel[] = {2,5,4,7,1,4,9,3,7,5,6,0};
    int maxDigit = tel[0];

    for (int i = 0; i < 12; i++) {
        if (tel[i] > maxDigit) {
            maxDigit = tel[i];
        }
    }
    printf("The max digit is %d\n", maxDigit);

    return 0;
}