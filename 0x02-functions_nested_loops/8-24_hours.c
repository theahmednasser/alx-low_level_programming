#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function that prints time
 *
 * Return - void
 */

void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
			printf("%02d:%02d\n", hrs, mins)
	}
}
