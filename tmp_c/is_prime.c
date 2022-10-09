#include "RSA.h"

/**
 * is_prime_number - function
 * @n: var 1
 * Return: int
 */

int is_prime_number(unsigned long long int n)
{
	return (_is_prime(n, 2));
}

/**
 * _is_prime - function
 * @n:  var 1
 * @y: var 2
 * Return: int
 */

int _is_prime(unsigned long long int n, int  y)
{
    long double a , b;

	/* if (y >= n && n > 1)
    {
        // printf("%llu is prrime\n", n);
		return (1);
    }
	else if (n % y == 0 || n <= 1)
    {
        // printf("%llu is not a prime\n", n);
		return (0);
    }
	return (_is_prime(n, y + 1)); */

    
    b = 4.0;
    a = sqrtl(5);

    while (y <= sqrtl(n))
    {
        if (n % y == 0 || n <= 1)
            return (0);
        y++;
    }
    return (1);
}