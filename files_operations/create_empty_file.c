#include <stdio.h>

void create_file(const char *filename, const char *operation)
{
    FILE *filePtr;
    filePtr = fopen(filename, operation);

    if (filePtr == NULL)
        printf("Error opening file!!\n");
    else
    {
        printf("File opened successfully!!\n");
        fclose(filePtr);
    }
}
