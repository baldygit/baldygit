/*	2012-01-13:	~/proj/code/specials.c	*/


/* system headers, libraries */
#include <stdio.h>
#include <stdlib.h>


/* local headers, libraries */
#include "myfile.c"


/* local macros */
#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


/* local function prototype: return-type function-name (param-type param-name, ...) */
int	specials ( int name1, int name2 );


/* global variables */
int 	elapsed = 0;
float	pie = 3.142;


main ( int argc, char *argv[] ) {

	/* define global vars */
	int status = 0;

	/* single ascii characters use single quotes */
	char	alpha = 'a';
	char	beta = 'b';

	printf( "\n" );
	printf( "\tSingle ASCII characters alpha - %c, and beta - %c\n", alpha, beta );

	printf( "\n" );
	printf( "\tBeep! \7 \n" );
	printf( "\tch = \'a\' \n" );
	printf( "\t<- Start of this line - carriage return without line feed  \r" );

	/* K&R p.26 recommends returning status to environment */
	return status;

}


int specials (int sean, int ruthanne ) {

	/* local specials of inputs */
	int	combined = 0;

	printf( "\tSean is %d\n", sean );
	printf( "\tRuth Anne is %d\n", ruthanne );

	printf( "\tTerminate execution & clean up specials: combined is %d\n", combined );
	exit (0); 

	combined = sean * ruthanne; 

	return combined;

}
