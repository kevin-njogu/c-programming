#include <stdio.h>

void write_char(const char *filename, const char *operation)
{
    FILE *filePtr;

    filePtr = fopen(filename, operation);

    if (filePtr == NULL)
        printf("Failed to open file\n");
    else
    {
        printf("File opened successfully\n");
        fputc('H', filePtr);
        fputc('E', filePtr);
        fputc('Y', filePtr);
        fclose(filePtr);
    }
}
