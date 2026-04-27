#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int i, isPalindrome = 0;
    int j = strlen(str) - 1;
    int size = strlen(str);

    for (i=0; i<size; i++) {
        if (j < 0) {
            break;
        }
        if (str[i] == str[j]) {
            isPalindrome++;
        }
        j--;
    }

    if (isPalindrome == strlen(str)) {
        printf("%s is a palindrome\n", str);
    }else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}