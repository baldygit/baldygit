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
	char	ch = 'a';
	int	i = 1;
	float	x = 3.141;

	printf( "\n" );

	/* cast operator takes the form: LHS = (newtype) variable; */
	x = 2.345;
	i = (int) x;
	ch = (char) x;
	printf ( "\tFrom float x == %f, int i == %d, char ch == %c\n", x, i, ch );

	i = 45;
	x = (float) i;
	ch = (char) i;
	printf( "\tFrom int i == %d, float x == %f, char ch == %c\n", i, x, ch );

	ch = '*';
	i = (int) ch;
	x = (float) ch;
	printf( "\tFrom char ch == %c, int i == %d, float x == %f\n", ch, i, x );

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
