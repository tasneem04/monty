#include <stdio.h>
#include <string.h>
#include "monty.h"
int main() 
{
	char *command = "pusher";
	if (strcmp(command, "push") != 0)
       	{
        fprintf(stderr, "Error: Expected 'push' command, but got '%s'\n", command);
	} else {
        printf("Command is 'push'\n");
	}
	return 0;
}
