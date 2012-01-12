/*	2012-01-12:	~/proj/code/early.c	*/

/* system headers, libraries */
#include <stdio.h>
#include <stdlib.h>


/* local headers, libraries */
#include "myfile.c"


/* local macros */
#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


/* local function prototypes: return-type function-name (param-type param-name, ...) */
int early ( int name1, int name2 );


/* global variables */
int 	elapsed = 0;
float	pie = 3.142;


main ( int argc, char *argv[] ) {

	/* define global vars */
	int status = 0;
	int	sean = 47, ruthanne = 55, total = 0;

	printf( "\n" );

	printf( "\tThe ages of Sean and Ruth Anne, before calling the early function, are %d and %d\n", sean, ruthanne );
	total = early( sean, ruthanne ); 
	printf( "\tThe early of the ages of Sean, %d and Ruth Anne, %d is %d\n", sean, ruthanne, total );

	printf( "\n" );

	/* K&R p.26 recommends returning status to environment */
	return status;

}


int early (int sean, int ruthanne ) {

	/* local early of inputs */
	int	combined = 0;

	printf( "\tSean is %d\n", sean );
	printf( "\tRuth Anne is %d\n", ruthanne );

	printf( "\tTerminate execution & clean up early: combined is %d\n", combined );
	exit (0); 

	combined = sean * ruthanne; 

	return combined;

}
