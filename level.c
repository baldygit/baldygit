/*	2012-01-10:	~/proj/code/level.c	*/

/* system headers / libraries */
#include <stdio.h>

/* local headers / libraries */
#include "myfile.c"

#define	SCREAM		"arghhhhh"
#define	NUMBER_OF_BONES	123

/* *** level 0 *** */

main () {

	/* define global vars */
	int	a = 1, b = 2, result = 0;

	printf( "\n" );

	printf( "\tThis is level 0: the main program\n");
	printf( "\tAbout to go down to level 1 \n");

	DownOne();

	printf( "\tReturned from level 1 to level 0, and exiting!\n" );

	printf( "\n" );

}


int DownOne () {

	/* local vars */

	printf( "\n" );
	printf( "\tEntered level 1 \n" );

	printf( "\tIn level 1, calling level 2, branch left \n");
	DownLeft( 2 );
	printf( "\tIn level 1, Calling level 2, branch right \n" );
	DownRight (2); 

	printf( "\tIn level 1, returning back up to level 0 \n");

}

DownLeft (int a) {

	/* local vars */

	printf( "\n" );
	printf( "\tEntered level %d, branch left\n", a);
	printf( "\tReturning to the calling function ... \n");
	printf( "\n" );

}


DownRight (int b) {

	/* local vars */

	printf( "\n" );
	printf( "\tEntered level %d, branch right\n", b);
	printf( "\tReturning to the calling function ... \n" );
	printf( "\n" );
}
