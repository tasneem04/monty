#include "monty.h"
int main(int argc, char *argv[])
{  
    FILE *file;
    (void) argv;
    
    if(argc != 2)
    {
	    fprintf(stderr,"USAGE: monty file\n");
	    exit(EXIT_FAILURE);
    }
    file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    push(1);
    push(2);
    push(3);
    
    pall();
    
    fclose(file);
    
    return 0;
}
