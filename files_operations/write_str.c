#include <stdio.h>

void write_str(const char *filename, const char *operation)
{
    FILE *filePtr;

    filePtr = fopen(filename, operation);

    if (filePtr ==NULL)
        printf("Failed to open file\n");
    else
    {
        fputs("Hello my\n", filePtr);
        fputs("name is\n", filePtr);
        fputs("kevin!\n", filePtr);
        fclose(filePtr);
    }
}
