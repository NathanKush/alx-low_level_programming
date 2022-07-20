#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - check if prime
 * @n: number to check if prime
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
