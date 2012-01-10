/*	2012-01-10:	~/proj/code/addtwoint.c	*/

/* system headers / libraries */
#include <stdio.h>

/* local headers / libraries */
#include "myfile.c"

#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


main () {

	/* define global vars */
	int	a = 1, b = 2, result = 0;

	printf( "\n" );

	printf( "\tBefore calling function, result is %d\n", result );
	result = addtwoint( a, b); 
	printf( "\tAfter calling function, the result of %d plus %d is %d\n", a, b, result);

	printf( "\n" );

}


int addtwoint (int a, int b) {

	/* local sum of inputs */
	int	c;

	c = a + b;

	return c;

}
