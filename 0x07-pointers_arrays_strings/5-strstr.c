#include "main.h"
#define NULL 0
#include <string.h>

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of sring at first occurence of the whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0; j, x;

	if (needle[0] == '\0'
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haaystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == need;e[j])
					x++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
