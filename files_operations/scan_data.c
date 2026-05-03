#include <stdio.h>

void scan_data(const char *filename, const char *operation)
{
    FILE *filePtr;
    int num;

    filePtr = fopen(filename, operation);

    if (filePtr == NULL)
        printf("Failed to open file");
    else
    {
        fscanf(filePtr, "%d", &num);
        printf("The value read to num is %d\n", num);
        fclose(filePtr);
    }
}
