#include <stdio.h>

void firstToCall(void) __attribute((constructor));

/**
 * firstToCall - Prints string before main
*/

void firstToCall(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
