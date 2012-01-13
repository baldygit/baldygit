/*	2012-01-13:	~/proj/code/assign.c	*/


/* system headers, libraries */
#include <stdio.h>
#include <stdlib.h>


/* local headers, libraries */
#include "myfile.c"


/* local macros */
#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


/* local function prototype: return-type function-name (param-type param-name, ...) */
int	assign ( int name1, int name2 );


/* global variables */
int 	elapsed = 0;
float	pie = 3.142;


main ( int argc, char *argv[] ) {

	/* define global vars */
	int	status = 0;
	int	i = 0;

	/* single ascii characters use single quotes */
	char	alpha = 'a';
	char	beta = 'b';
	char	ch = 'A';

	printf( "\n" );

	i = ch;
	printf( "\tThe ASCII code of %c is %d\n", ch, i );

	/* K&R p.26 recommends returning status to environment */
	printf( "\n" );
	return status;

}


int assign (int sean, int ruthanne ) {

	/* local assign of inputs */
	int	combined = 0;

	printf( "\tSean is %d\n", sean );
	printf( "\tRuth Anne is %d\n", ruthanne );

	printf( "\tTerminate execution & clean up assign: combined is %d\n", combined );
	exit (0); 

	combined = sean * ruthanne; 

	return combined;

}
