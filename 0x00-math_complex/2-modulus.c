#include "holberton.h"

/**
 * modulus - function moduls
 * @c: complex number
 * Return: c
 */

double modulus(complex c)
{
	double m;

	m = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (m);
}
