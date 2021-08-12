#include "holberton.h"

/**
 * display_complex_number - function that display the complex numbers
 * @c: complex number
 * Return: 0
 */

void display_complex_number(complex c)
{
	if (c.re != 0 && c.im != 0)
	{
		if (c.im == 1 || c.im == -1)
		{
			if (c.im < 0)
				printf("%.9g - i\n", c.re);
			else
				printf("%.9g + i\n", c.re);
		}
		else
		{
			if (c.im < 0)
				printf("%.9g - %.9gi\n", c.re, c.im * (-1));
			else
				printf("%.9g + %.9gi\n", c.re, c.im);
		}
	}

	else if (c.re != 0 && c.im == 0)
		printf("%.9g\n", c.re);

	else if (c.re == 0 && c.im != 0)
	{
		if (c.im == 1 || c.im == -1)
		{
			if (c.im < 0)
				printf("%.9g - i\n", c.re);
			else
				printf("%.9g + i\n", c.re);
		}
		else
		{
			if (c.im < 0)
				printf("%.9g - %.9gi\n", c.re, c.im * (-1));
			else
				printf("%.9g + %.9gi\n", c.re, c.im);
		}
	}
	else if (c.re == 0 && c.im == 0)
		printf("0");
}
