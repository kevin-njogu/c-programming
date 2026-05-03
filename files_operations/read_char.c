#include <stdio.h>

void read_char(const char *filename, const char *operation)
{
    FILE *filePtr;
    char myChar;

    filePtr = fopen(filename, operation);

    if (filePtr == NULL)
        printf("Error reading file\n");
    else
    {
        printf("File opened successfully\n");
        myChar = fgetc(filePtr);
        printf("The character read is %c\n", myChar);
        fclose(filePtr);
    }
}
