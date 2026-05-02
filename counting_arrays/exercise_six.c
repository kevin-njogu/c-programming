#include <stdio.h>
#define SIZE 8

int main() {
    char arr[SIZE] = {'k', 'I', 'b', 'g', 'C', 'z', 'I', 'I'};
    int countArrLowerCase[26] = {0};
    int countArrUpperCase[26] = {0};
    int maxLower = 0, maxUpper = 0, max = 0, isUpper = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            countArrLowerCase[arr[i]-'a']++;
        }else {
            countArrUpperCase[arr[i]-'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (countArrLowerCase[i] > countArrLowerCase[maxLower]) {
            maxLower = i;
        }

        if (countArrUpperCase[i] > countArrUpperCase[maxUpper]) {
            maxUpper = i;
        }
    }

    
    if (countArrLowerCase[maxLower] > countArrUpperCase[maxUpper]) {
        max = maxLower + 'a';
    }else {
        max = maxUpper + 'A';
        isUpper = 1;
    }


    printf(" \n");
    printf("The character %c has highest occurence of %d\n", max, isUpper == 1 ? countArrUpperCase[maxUpper]:countArrLowerCase[maxLower]);

    return 0;
}