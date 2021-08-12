#include "holberton.h"

/**
 * argument - function that find the angle
 * @c: complex number
 * Return: tangent
 */

double argument(complex c)
{
	double arg;

	arg = atan(c.im / c.re);

	return (arg);
}
