#include "main.h"
#include <string.h>
/**
 *  _strncpy -> for copying
 *  @dest: parameter 1
 *  @src: parameter
 *  @n: parameter 3
 *  Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
