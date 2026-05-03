#include <stdio.h>
#define SIZE 26

void get_occurrences(const char *filename, const char *operation)
{
    char mychar;
    int countChar = 0;
    int countArr[26] = {0};
    int maxIndex = 0;
    FILE *file;

    file = fopen(filename, operation);

    if (file == NULL)
        printf("Failed to open file\n");
    else
    {
        while ((mychar = fgetc(file)) != EOF)
        {
            if (mychar >= 'a' && mychar <= 'z')
            {
                countArr[mychar - 'a']++;
            }
        }
        for (int i = 0; i < SIZE; i++)
        {
            printf("%c occurs %d times\n", i + 'a', countArr[i]);
            if (countArr[i] > countArr[maxIndex])
            {
                maxIndex = i;
            }
        }
        printf("The letter with the maximum appearnaces is %c with %d occurences\n", maxIndex + 'a', countArr[maxIndex]);
        fclose(file);
    }
}
