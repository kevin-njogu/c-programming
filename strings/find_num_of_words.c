#include <stdio.h>
#define SIZE 16

int main() {
    char sentence[SIZE] = "This is my name";
    int i, wordCount = 1;

    for (i = 0; i < SIZE; i++) {
        if (sentence[i] == '\0') {
            break;
        }else {
            if (sentence[i] == 0x20) {
                wordCount++;
            }
        }
    }

    printf("This sentence has %d words\n", wordCount);

    return 0;
}