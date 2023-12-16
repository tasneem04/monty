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
		token = (strtok(line, " "));
		while(token != NULL)
		{
		 if (strcmp(token, "push") != 0) {
                    integerValue = atoi(token);
		    if(isdigit(integerValue))
		    {
                    push(integerValue);
		    }
		    else
		    {
			    fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
			    exit(EXIT_FAILURE);
		    }
                }
                token = strtok(NULL, " ");
		}
	
	}
	else if(strstr(line, "pall") != NULL)
	{
		pall();
	}
	else if(strstr(line,"pont") != NULL)
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else 
	{
		printf("L<%d>: unknown instruction <opcode>\n",line_number);
	        exit(EXIT_FAILURE);
	}
	line_number++;
    }
    
    free(line);
    fclose(file);

    return 0;
}
