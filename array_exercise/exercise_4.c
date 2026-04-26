#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int flag = 0;
    int equal = 0;
    int currentNum = 0, previousNum = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter the array item for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        currentNum = arr[i];
        if (currentNum < previousNum) {
            flag = 0;
            break;
        }else if (currentNum > previousNum) {
            flag = 1;
        }else if (currentNum == previousNum || currentNum > previousNum) {
            equal = 1;
            flag = i;
        }
        previousNum = currentNum;
    }

    if(flag > 0 && equal > 0) {
        printf("This array is just sorted\n");
    }else if(flag > 0) {
        printf("This array is really sorted\n");
    }else {
        printf("This is not sorted\n");
    }

    return 0;
}