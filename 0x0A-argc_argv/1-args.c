#include <stdio.h>
#include "main.h"

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	
	return (0);
}
