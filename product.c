/*	2012-01-12:	~/proj/code/product.c	*/

/* system headers, libraries */
#include <stdio.h>

/* local headers, libraries */
#include "myfile.c"

#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123

/* local function prototypes: return-type function-name (param-type param-name, ...) */
int product ( int name1, int name2 );


main () {

	/* define global vars */
	int status = 0;
	int	sean = 47, ruthanne = 55, total = 0;

	printf( "\n" );

	total = product( sean, ruthanne ); 
	printf( "\tThe product of the ages of Sean, %d and Ruth Anne, %d is %d\n", sean, ruthanne, total );

	printf( "\n" );

	/* K&R p.26 recommends returning status to environment */
	return status;

}


int product (int sean, int ruthanne ) {

	/* local product of inputs */
	int	combined = 0;

	printf( "\tSean is %d\n", sean );
	printf( "\tRuth Anne is %d\n", ruthanne );

	combined = sean * ruthanne; 

	return combined;

}
