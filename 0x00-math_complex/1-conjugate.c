#include "holberton.h"

/**
 * conjugate - function that conjugate a complex num
 * @c: complex number
 * Return: c
 */

complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
