#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always 0 (Successs)
 */
int main()
{
	printf("Size of char: %ld byte\n",sizeof(char));
	printf("Size of int: %ld bytes\n",sizeof(int));
	printf("Size of float: %ld bytes\n",sizeof(float));
	printf("Size of double: %ld bytes", sizeof(double));
        return 0;
}
