#include "monty.h"

/**
 * main - check the code.
 * @argc: number of command line arguments.
 * @argv: pointer to array containing commad line arguments.
 * */

int main(int argc, char *argv[])
{	
    int integerValue;
    unsigned int line_number;
    FILE *file;
    char *line;
    size_t len;
    char *token;
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

    while ((getline(&line, &len, file)) != -1)
    {
       	if(strstr(line, "push") != NULL)
	{
	
		token = (strtok(line," "));
		while(token != NULL)
		{
		integerValue = atoi(token);
		push(integerValue);
		token = strtok(NULL, "");
	
		}
	}
	else if(strstr(line, "pall") != NULL)
	{
		pall();
	}
	else if(strstr(line,"pint") != NULL)
	{
		pint();
	}
	else 
	{
		printf("wrong opcode");
	}
	line_number++;
    }
    
    free(line);
    fclose(file);

    return 0;
}
