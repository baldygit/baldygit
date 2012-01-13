/*	2012-01-13:	~/proj/code/types.c	*/

/* system headers, libraries */
#include <stdio.h>
#include <stdlib.h>


/* local headers, libraries */
#include "myfile.c"


/* local macros */
#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


/* local function prototypes: return-type function-name (param-type param-name, ...) */
int	types ( int name1, int name2 );

char	beta = 'b';


/* global variables */
int 	elapsed = 0;
float	pie = 3.142;


main ( int argc, char *argv[] ) {

	/* define global vars */
	int status = 0;
	int	sean = 47, ruthanne = 55, total = 0;

	/* single ascii characters use single quotes */
	char	alpha = 'a';
	char	beta = 'b';

	printf( "\n" );

	printf( "\tSingle ASCII characters alpha - %c, and beta - %c\n", alpha, beta );


	printf( "\tThe ages of Sean and Ruth Anne, before calling the types function, are %d and %d\n", sean, ruthanne );
	total = types( sean, ruthanne ); 
	printf( "\tThe types of the ages of Sean, %d and Ruth Anne, %d is %d\n", sean, ruthanne, total );

	printf( "\n" );

	/* K&R p.26 recommends returning status to environment */
	return status;

}


int types (int sean, int ruthanne ) {

	/* local types of inputs */
	int	combined = 0;

	printf( "\tSean is %d\n", sean );
	printf( "\tRuth Anne is %d\n", ruthanne );

	printf( "\tTerminate execution & clean up types: combined is %d\n", combined );
	exit (0); 

	combined = sean * ruthanne; 

	return combined;

}
