/*	2012-01-07:	~/proj/code/skeleton.c	*/

/* system headers / libraries */
#include <stdio.h>

/* local headers / libraries
#include "myfile.c"

#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


main () {

	/* define global vars */
	int	a, b;	
	int	simple;

	printf( "\n" );

	a = random();
	printf( "\tToday's randum number is %d \n", a);

	/* assign return val to global var */
	b = function1();
	printf( "\tCalled function1 \n" );

	/* assign return val to global var */
	simple = function2(a,1);
	printf( "\tAdding 1 to our random number gives %d \n", simple );

	printf( "\n" );

}


int function1 () {

	/* do nothing */

}

int function2 (a, b) {

	/* local sum of inputs */
	int	c;

	c = a + b;

	return c;

}
