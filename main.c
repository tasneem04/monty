#include "monty.h"
int main(int argc, char **argv)
{  
    (void) argv;
    if(argc != 2)
    {
	    fprintf(stderr,"USAGE: monty file\n");
	    exit(EXIT_FAILURE);
    }

    push(1);
    push(2);
    push(3);
    
    pall();
    return 0;
}
