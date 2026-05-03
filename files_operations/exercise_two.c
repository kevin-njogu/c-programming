#include <stdio.h>

void add_powers(const char *filename, const char *operation)
{
    FILE *file;

    file = fopen(filename, operation);

    if (file == NULL)
        printf("Failed to open file\n");
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            fprintf(file, "%d  %d\n", i, i*i);
        }
        fclose(file);
    }
}
