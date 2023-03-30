#include<stdio.h>

/**
 * start_Fun - Apply the constructor attribute to start_Fun() so that it
 *   is executed before main()
 */
void start_Fun(void) __attribute__ ((constructor));

/**
 * start_Fun - implementation of start_Fun
 */
void start_Fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
