#include "monty.h"

/**
 * main - check the code.
 * @argc: number of command line arguments.
 * @argv: pointer to array containing commad line arguments.
 * */

int main(int argc, char *argv[])
{
    unsigned int line_number;
    FILE *file;
    char *line;
    size_t len;
    (void) argv;

    if(argc != 2)
    {
            fprintf(stderr,"USAGE: monty file\n");
            exit(EXIT_FAILURE);
    }
    file = fopen(argv[1], "r");
    if (!file)
    {
            fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
            exit(EXIT_FAILURE);
    }

    line = NULL;
    len = 0;
    line_number = 0;

    while (getline(&line, &len, file) != -1)
    {
        line_number++;
    }


    free(line);
    fclose(file);

    return 0;
}
