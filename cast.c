/*	2012-01-13:	~/proj/code/cast.c	*/


/* system headers, libraries */
#include <stdio.h>
#include <stdlib.h>


/* local headers, libraries */
#include "myfile.c"


/* local macros */
#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


/* local function prototype: return-type function-name (param-type param-name, ...) */
int	cast ( int name1, int name2 );


/* global variables */
int 	elapsed = 0;
float	pie = 3.142;


main ( int argc, char *argv[] ) {

	/* define global vars */
	int	status = 0;
	int	i = 12;
	float	x = 3.141;

	/* single ascii characters use single quotes */
	char	alpha = 'a';
	char	beta = 'b';
	char	ch = 'A';

	printf( "\n" );

	/* cast operator takes the form: LHS = (newtype) variable; */
	printf( "\tBEFORE CAST: Integer i has the value %d and float x has the value %f\n", i, x );
	x = (float) i;
	printf( "\tAFTER CAST: Integer i has the value %d and float x has the value %f\n", i, x );
	

	/* K&R p.26 recommends returning status to environment */
	printf( "\n" );
	return status;

}


int cast (int sean, int ruthanne ) {

	/* local cast of inputs */
	int	combined = 0;

	printf( "\tSean is %d\n", sean );
	printf( "\tRuth Anne is %d\n", ruthanne );

	printf( "\tTerminate execution & clean up cast: combined is %d\n", combined );
	exit (0); 

	combined = sean * ruthanne; 

	return combined;

}
