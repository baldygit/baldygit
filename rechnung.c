/*	2012-01-10:	~/proj/code/rechnung.c	*/

/* system headers, libraries */
#include <stdio.h>

/* local headers, libraries */
#include "myfile.c"

#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123


main () {

	/* define global vars */
	int	starter = 1, main = 2, dessert = 3, total = 0;

	printf( "\n" );

	total = rechnung( starter, main, dessert ); 

	printf( "\n" );

}


int rechnung (int starter, int main, int dessert) {

	/* local sum of inputs */
	int	bill = 0;

	printf( "\tStarter is %d\n", starter );
	printf( "\tMain is %d\n", main );
	printf( "\tDessert is %d\n", dessert );

	bill = starter + main + dessert;
	printf( "\tBill is %d\n", bill );

	return bill;

}
