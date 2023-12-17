#include "monty.h"

/**
 * main - check the code.
 * @argc: number of command line arguments.
 * @argv: pointer to array containing commad line arguments.
 * */

int main(int argc, char *argv[])
{
    ssize_t opcode;	
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

    while ((opcode = (getline(&line, &len, file))) != -1)
    {
	    token = (strtok(line, " "));
	    while(token != NULL)
	    {	printf("%s\n",line);
		    if(strcmp(line, "push") == 0)
		    {
                    integerValue = atoi(token);
		    if(isdigit(integerValue || argc > 1) == 0)
		    {
			    push(integerValue);
		    }
		    else
		    {
			    fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
			    exit(EXIT_FAILURE);
		    }
                
		    }
		    else if(strstr(line, "pall") != NULL)
	    	    {
			    pall();
		    }
		   else if(strstr(line,"pint") != NULL)
		   {
			   fprintf(stderr, "L<%d>: can't pint, stack empty", line_number);
			   exit(EXIT_FAILURE);
		   }
		    else 
		    {
			    fprintf(stderr,"L<%d>: unknown instruction <%s>\n",line_number,line);
			    exit(EXIT_FAILURE);
		    }
		    token = strtok(NULL, " ");
	    }
	line_number++;
	    
    }
    
    free(line);
    fclose(file);

    return 0;
}
